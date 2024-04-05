/*
 * Ship.cpp
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#include "Ship.h"
#include "ProblemData.h"

Ship::Ship()
{
	this->id = -1;
	this->maxWeightCapaity = 0;
}

Ship::~Ship()
{
	// TODO Auto-generated destructor stub
}
void Ship::addDrone(Drone* drone)
{
	droneList.push_back(drone);
}
void Ship::addShipVelocityLevel(ShipVelocityLevel* shipVel)
{
	velocityLevelList.push_back(shipVel);
}
float Ship::calculateEdgeCost(Vertex* i, Vertex* j)
{
	ProblemData* data = ProblemData::getInstance();
	float edgeCost = 0.0;

	if(i != NULL)
	{
		float distance = i->getPoint()->getDistance(j->getPoint());
	}
	return edgeCost;
}
