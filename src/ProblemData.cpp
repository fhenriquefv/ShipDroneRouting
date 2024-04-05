/*
 * ProblemData.cpp
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#include "ProblemData.h"
#include <iostream>
#include <fstream>

ProblemData* ProblemData::problemData = NULL;
ProblemData::ProblemData() {

	this->instanceName = "";
}

ProblemData::~ProblemData() {
	// TODO Auto-generated destructor stub
}
bool ProblemData::generateRandomInstance(int numDrones, int numShips, string path)
{
	generateDroneList(numDrones);
	generateShipList(numShips);
	loadDemandList(path+".txt");
	loadTerminalPoints(path+"-terminal-points.txt");

	return true;
}
void ProblemData::generateDroneList(int numDrones)
{
	droneList.clear();

	DroneVelocityLevel* droneVelocityLevel = new DroneVelocityLevel();
	droneVelocityLevel->setId(1);
	droneVelocityLevel->setDescription("NORMAL");
	droneVelocityLevel->setEnergyByKM(3.5);
	droneVelocityLevel->setVelocity(10);//TODO ver artigo

	for (int i = 0; i < numDrones; i++) {
		Drone* drone = new Drone();
		drone->setId(i);
		drone->setMaxWeightCapacity(3);
		drone->setEmptyWeight(6);
		drone->addVelocityLevel(droneVelocityLevel);

		droneList.push_back(drone);
	}
}
void ProblemData::generateShipList(int numShips)
{
	shipList.clear();

	ShipVelocityLevel* shipVel = new ShipVelocityLevel();
	shipVel->setId(1);
	shipVel->setVelocity(13); //TODO
	shipVel->setBunkerComsuptionByMile(10); //TODO

	for (int i = 0; i < numShips; i++) {
		Ship* ship = new Ship();
		ship->setId(i);
		ship->setMaxWeightCapacity(90);
		ship->addDrone(droneList[i]);
		ship->addShipVelocityLevel(shipVel);

		shipList.push_back(ship);
	}
}

bool ProblemData::loadDemandList(string path)
{
	string line, id_str, x_str, y_str, demand_str, pickup_str;
	ifstream myfile (path);
	if (myfile.is_open())
	{

		while (std::getline(myfile, id_str, ',') &&
		       std::getline(myfile, x_str, ',') &&
		       std::getline(myfile, y_str, ',') &&
			   std::getline(myfile, demand_str, ',') &&
			   std::getline(myfile, pickup_str)
			   )
		{
			Demand* demand = new Demand();
		    demand->setId(std::stoi(id_str));
		    demand->setWeight(std::stof(demand_str));
		    demand->setVolume(0);  //TODO

		    Point* customer = new Point();
		    customer->setId(demand->getId());
		    customer->setLatitude(std::stof(y_str));
		    customer->setLongitude(std::stof(x_str));
		    customer->setPointType(1);

		    demand->setCustomer(customer);
		    cout << demand->toString() <<endl;
		    demandList.push_back(demand);
		}
		myfile.close();
	}else {
		cout << "Unable to open file";
		return false;
	}


	return true;
}
bool ProblemData::loadTerminalPoints(string path)
{
	string line, id_str, x_str, y_str;
	ifstream myfile (path);
	if (myfile.is_open())
	{
		while (std::getline(myfile, id_str, ',') &&
			   std::getline(myfile, x_str, ',') &&
			   std::getline(myfile, y_str, ',')
			   )
		{
			Point* point = new Point();
			point->setId(std::stoi(id_str));
			point->setLatitude(std::stof(y_str));
			point->setLongitude(std::stof(x_str));
			point->setPointType(2);

			terminalPoints.push_back(point);
		}
	}else
	{
		cout << "Unable to open file";
		return false;
	}
	return true;
}

void ProblemData::addTerminalPoints(Point* point)
{
	terminalPoints.push_back(point);
}
