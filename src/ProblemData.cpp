/*
 * ProblemData.cpp
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#include "ProblemData.h"
ProblemData* ProblemData::problemData = NULL;
ProblemData::ProblemData() {

	this->instanceName = "";
}

ProblemData::~ProblemData() {
	// TODO Auto-generated destructor stub
}
bool ProblemData::generateRandomInstance(int numDrones, int numShips)
{
	generateDroneList(numDrones);
	generateShipList(numShips);
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

	}
}
