/*
 * Customer.cpp
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#include <sstream>
#include "Point.h"
#include "math.h"
int CUSTOMER_POINT = 1;
int TERMINAL_POINT = 2;

Point::Point() {
	this->id = -1;
	this->latitude = 0;
	this->longitude = 0;
}

Point::~Point() {
	// TODO Auto-generated destructor stub
}

const string Point::toString()
{
	std::ostringstream oss;
	oss << "id = " << id << " lat = " << latitude << " long = " << longitude ;
	return oss.str();
}

float Point::getDistance(Point* point)
{
	float deltaX = pow((this->longitude - point->getLongitude()), 2);
	float deltaY = pow((this->latitude - point->getLatitude()), 2);

	return sqrt(deltaX+deltaY);
}
