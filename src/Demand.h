/*
 * Demand.h
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#ifndef DEMAND_H_
#define DEMAND_H_

#include "Point.h"

class Demand {
public:
	Demand();
	virtual ~Demand();

	const int getId(){return id;}
	void setId(const int id){this->id = id;}

	const float getWeight(){return weight;}
	void setWeight(const float weight){this->weight = weight;}

	const float getVolume(){return volume;}
	void setVolume(const float volume){this->volume = volume;}

	const Point* getCustomer(){return customer;}
	void setCustomer(Point* customer){this->customer = customer;}
	const string toString();
private:
	int id;
	float weight;
	float volume;
	Point* customer;
};

#endif /* DEMAND_H_ */
