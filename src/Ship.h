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

private:
	int id;
	vector<Drone*> droneList;
	float maxWeightCapaity;

};

#endif /* SHIP_H_ */
