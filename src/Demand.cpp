/*
 * Demand.cpp
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#include "Demand.h"
#include <iostream>
#include <sstream>

Demand::Demand() {
	this->id = -1;
	this->volume = 0;
	this->weight = 0;
	this->customer = NULL;
}

Demand::~Demand() {
	// TODO Auto-generated destructor stub
}

const string Demand::toString()
{
	std::ostringstream oss;
	oss << "id = " << id << " volume = " << volume << " weight = " << weight << " customer = [ "<< customer->toString() << " ]" ;
	return oss.str();
}

