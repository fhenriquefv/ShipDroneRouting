/*
 * ShipVertex.h
 *
 *  Created on: 8 de abr. de 2024
 *      Author: 55219
 */

#ifndef SHIPVERTEX_H_
#define SHIPVERTEX_H_

#include "Vertex.h"

class ShipVertex: public Vertex {
public:
	ShipVertex();
	virtual ~ShipVertex();

	float getTotalDistance(){return totalDistance;}
	void setTotalDistance(float totalDistance){this->totalDistance = totalDistance;}

	float getTotalCost(){return totalCost;}
	void setTotalCost(float totalCost){this->totalCost = totalCost;}

private:
	float totalDistance;
	float totalCost;
};

#endif /* SHIPVERTEX_H_ */
