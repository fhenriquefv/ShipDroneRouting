/*
 * ProblemData.h
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#ifndef PROBLEMDATA_H_
#define PROBLEMDATA_H_

#include "Drone.h"
#include "Demand.h"
#include <iostream>
#include "Ship.h"
#include <string>
#include <vector>
#include "Point.h"

using namespace std;

class ProblemData {
public:

	virtual ~ProblemData();

	const string getInstanceName(){return instanceName;}
	void setInstanceName(const string instance){this->instanceName = instance;}

	vector<Drone*> getDroneList(){return droneList;}
	vector<Demand*> getDemandList(){return demandList;}
	vector<Ship*> getShipList(){return shipList;}
	vector<Point*> getTerminalPointList(){return terminalPoints;}

	void addDrone(Drone* drone){droneList.push_back(drone);}
	void addDemand(Demand* demand){demandList.push_back(demand);}
	void addShip(Ship* ship){shipList.push_back(ship);}
	static ProblemData* getInstance(){
		if(problemData == NULL)
		{

			problemData = new ProblemData();
		}
		return problemData;
	}
	bool generateRandomInstance(int numDrones, int numShips, string path);

	vector<Point*> getTerminalPoints(){return terminalPoints;}
	void addTerminalPoints(Point* point);


private:

	ProblemData();
	void generateDroneList(int numDrones);
	void generateShipList(int numShips);
	bool loadDemandList(string path);
	bool loadTerminalPoints(string path);

	static ProblemData* problemData;
	string instanceName;
	vector<Drone*> droneList;
	vector<Demand*> demandList;
	vector<Ship*> shipList;
	vector<Point*> terminalPoints;
};

#endif /* PROBLEMDATA_H_ */
