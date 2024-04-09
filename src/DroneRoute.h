/*
 * DroneRoute.h
 *
 *  Created on: 8 de abr. de 2024
 *      Author: 55219
 */

#ifndef DRONEROUTE_H_
#define DRONEROUTE_H_

#include "DroneVertex.h"
#include <vector>

using namespace std;

class DroneRoute {
public:
	DroneRoute();
	virtual ~DroneRoute();

	vector<DroneVertex*> getDroneVertices() { return droneVertices;}
	void addDroneVertex(DroneVertex* droneVertex){this->droneVertices.push_back(droneVertex);}

	float getTotalDistance() {return totalDistance;}
	void setTotalDistance(float totalDistance){this->totalDistance = totalDistance;}

	float getTotalCost() {return totalCost;}
	void setTotalCost(float totalCost){this->totalCost = totalCost;}

private:
	vector<DroneVertex*> droneVertices;
	float totalDistance;
	float totalCost;
};

#endif /* DRONEROUTE_H_ */
