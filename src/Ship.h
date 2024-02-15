/*
 * Ship.h
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#ifndef SHIP_H_
#define SHIP_H_
#include<vector>
#include "Drone.h"
#include "ShipVelocityLevel.h"

using namespace std;

class Ship {
public:
	Ship();
	virtual ~Ship();

	const int getId(){return id;}
	void setId(const int id){this->id = id;}

	const float getMaxWeightCapacity(){return maxWeightCapaity;}
	void setMaxWeightCapacity(const float maxWeightCapacity){this->maxWeightCapaity = maxWeightCapacity;}

	const vector<Drone*> getDroneList(){return droneList;}

	void addDrone(Drone* drone);
	void addShipVelocityLevel(ShipVelocityLevel* shipVel);

private:
	int id;
	vector<Drone*> droneList;
	float maxWeightCapaity;
	vector<ShipVelocityLevel*> velocityLevelList;
};

#endif /* SHIP_H_ */
