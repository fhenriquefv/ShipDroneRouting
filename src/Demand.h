/*
 * Demand.h
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#ifndef DEMAND_H_
#define DEMAND_H_

#include "Customer.h"

class Demand {
public:
	Demand();
	virtual ~Demand();

	const int getId(){return id;}
	void setId(const int id){this->id = id;}

	const float getWeight(){return weight;}
	void setWeight(const float id){this->weight = weight;}

	const float getVolume(){return volume;}
	void setVolume(const float volume){this->volume = volume;}

	const Customer* getCustomer(){return customer;}
	void setCustomer(Customer* customer){this->customer = customer;}

private:
	int id;
	float weight;
	float volume;
	Customer* customer;
};

#endif /* DEMAND_H_ */
