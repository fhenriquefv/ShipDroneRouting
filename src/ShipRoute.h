/*
 * ShipRoute.h
 *
 *  Created on: 8 de abr. de 2024
 *      Author: 55219
 */

#ifndef SHIPROUTE_H_
#define SHIPROUTE_H_

#include "ShipVertex.h"
#include <vector>

using namespace std;

class ShipRoute {
public:
	ShipRoute();
	virtual ~ShipRoute();

	vector<ShipVertex*> getShipRouteVertices() { return shipRouteVertices;}
	void addShipRouteVertex(ShipVertex* shipVertex){this->shipRouteVertices.push_back(shipVertex);}

	float getTotalDistance() {return totalDistance;}
	void setTotalDistance(float totalDistance){this->totalDistance = totalDistance;}

	float getTotalCost() {return totalCost;}
	void setTotalCost(float totalCost){this->totalCost = totalCost;}

private:
	vector<ShipVertex*> shipRouteVertices;
	float totalDistance;
	float totalCost;
};

#endif /* SHIPROUTE_H_ */
