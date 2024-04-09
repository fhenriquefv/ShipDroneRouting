/*
 * Drone.cpp
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#include "Drone.h"
#include "ProblemData.h"

Drone::Drone() {
	this->id = -1;
	this->maxVolumeCapacity = 0;
	this->maxWeightCapacity = 0;
}

Drone::~Drone() {
	// TODO Auto-generated destructor stub
}

float Drone::calculateEdgeCost(Vertex* i, Vertex* j)
{
	ProblemData* data = ProblemData::getInstance();
	float edgeCost = 0.0;

	if(i != NULL)
	{
		float distance = i->getPoint()->getDistance(j->getPoint());
	}
	return edgeCost;

}
