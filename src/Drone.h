/*
 * Drone.h
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#ifndef DRONE_H_
#define DRONE_H_

#include<vector>
#include "DroneVelocityLevel.h"
using namespace std;

class Drone {
public:
	Drone();
	virtual ~Drone();

	const int getId(){return id;}
	void setId(const int id){this->id = id;}

	const float getMaxWeightCapacity(){return maxWeightCapacity;}
	void setMaxWeightCapacity(const float maxWeightCapacity){this->maxWeightCapacity = maxWeightCapacity;}

	const vector<DroneVelocityLevel*> getVelocityLevelList(){return velocityLevelList;}
	void addVelocityLevel(DroneVelocityLevel* velLevel){velocityLevelList.push_back(velLevel);};

private:
	int id;
	float maxWeightCapacity;
	float maxVolumeCapacity;
	vector<DroneVelocityLevel*> velocityLevelList;
};

#endif /* DRONE_H_ */
