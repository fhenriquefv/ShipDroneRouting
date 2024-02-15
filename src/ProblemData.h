/*
 * ProblemData.h
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#ifndef PROBLEMDATA_H_
#define PROBLEMDATA_H_

#include "Customer.h"
#include "Drone.h"
#include "Demand.h"
#include <iostream>
#include "Ship.h"
#include <string>
#include <vector>

using namespace std;

class ProblemData {
public:

	virtual ~ProblemData();

	const string getInstanceName(){return instanceName;}
	void setInstanceName(const string instance){this->instanceName = instance;}

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
	bool generateRandomInstance(int numDrones, int numShips);
private:

	ProblemData();
	void generateDroneList(int numDrones);
	void generateShipList(int numShips);

	static ProblemData* problemData;
	string instanceName;
	vector<Drone*> droneList;
	vector<Demand*> demandList;
	vector<Ship*> shipList;
};

#endif /* PROBLEMDATA_H_ */
