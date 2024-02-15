/*
 * ShipVelocityLevel.h
 *
 *  Created on: 14 de fev. de 2024
 *      Author: 55219
 */

#ifndef SHIPVELOCITYLEVEL_H_
#define SHIPVELOCITYLEVEL_H_

class ShipVelocityLevel {
public:
	ShipVelocityLevel();
	virtual ~ShipVelocityLevel();

	const int getId(){return id;}
	void setId(const int id){this->id = id;}

	const float getVelocity(){return velocity;}
	void setVelocity(const int velocity){this->velocity = velocity;}

	const float getBunkerComsuptionByMile(){return bunkerComsuptionByMile;}
	void setBunkerComsuptionByMile(const float bunkerComsuptionByMile){this->bunkerComsuptionByMile = bunkerComsuptionByMile;}

private:
	int id;
	float velocity;
	float bunkerComsuptionByMile; //consumo de bunker por milha náutica
};

#endif /* SHIPVELOCITYLEVEL_H_ */
