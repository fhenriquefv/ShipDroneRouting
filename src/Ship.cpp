/*
 * Ship.cpp
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#include "Ship.h"

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

