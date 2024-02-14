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
#include "Ship.h"
#include <string>
#include <vector>

using namespace std;

class ProblemData {
public:
	ProblemData();
	virtual ~ProblemData();

	const string getInstanceName(){return instanceName;}
	void setInstanceName(const string instance){this->instanceName = instance;}

	void addDrone(Drone* drone){droneList.push_back(drone);}
	void addDemand(Demand* demand){demandList.push_back(demand);}
	void addShip(Ship* ship){shipList.push_back(ship);}
private:
	string instanceName;
	vector<Drone*> droneList;
	vector<Demand*> demandList;
	vector<Ship*> shipList;
};

#endif /* PROBLEMDATA_H_ */
