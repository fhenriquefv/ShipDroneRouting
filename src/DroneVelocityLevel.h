/*
 * DroneVelocityLevel.h
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#ifndef DRONEVELOCITYLEVEL_H_
#define DRONEVELOCITYLEVEL_H_

#include <string>

using namespace std;

class DroneVelocityLevel {
public:
	DroneVelocityLevel();
	virtual ~DroneVelocityLevel();

	const int getId(){return id;}
	void setId(const int id){this->id = id;}

	const int getVelocity(){return velocity;}
	void setVelocity(const int velocity){this->velocity = velocity;}

	const float getEnergyByKM(){return energyByKM;}
	void setEnergyByKM(const int energyByKM){this->energyByKM = energyByKM;}

	const string getDescription(){return description;}
	void setDescription(const string description){this->description = description;}

private:
	int id;
	float velocity;
	float energyByKM;
	string description;
};

#endif /* DRONEVELOCITYLEVEL_H_ */
