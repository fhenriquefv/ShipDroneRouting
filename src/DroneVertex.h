/*
 * DroneVertex.h
 *
 *  Created on: 7 de abr. de 2024
 *      Author: 55219
 */

#ifndef DRONEVERTEX_H_
#define DRONEVERTEX_H_

#include "Vertex.h"

class DroneVertex: public Vertex {
public:
	DroneVertex();
	virtual ~DroneVertex();

	//TIPOS de modos de partida possíveis para um drone
	static int FLIGHT_VERTEX; //o drone sai desse vértice voando para o próximo vértice da rota
	static int DRIVING_ON_SHIP_VERTEX; //o drone sai desse vértice dentro de um navio

	int getDepartureTravelMode(){return departureTravelMode;}
	void setDepartureTravelMode(int departureTravelMode){this->departureTravelMode = departureTravelMode;}

	float getCurrentWeight(){ return currentWeight;}
	void setCurrentWeight(float currentWeight){this->currentWeight = currentWeight;}

	float getCurrentVolume(){ return currentVolume;}
	void setCurrentVolume(float currentVolume){this->currentVolume = currentVolume;}

	float getResidualEnergy(){ return residualEnergy;}
	void setResidualEnergy(float residualEnergy){this->residualEnergy = residualEnergy;}

	bool isBatteryChangeVertex(){ return this->batteryChangeVertex;}
	void setBatteryChangeVertex(bool batteryChangeVertex){ this->batteryChangeVertex = batteryChangeVertex; }

	int getNumberOfUsedBatteries(){return numberOfUsedBatteries;}
	void setNumberOdUsedBatteries(int numberOfUsedBatteries){this->numberOfUsedBatteries = numberOfUsedBatteries;}

private:
	//indica se o drone irá partir desse vértice dentro do navio ou voando
	int departureTravelMode;
	float currentWeight;
	float currentVolume;
	float residualEnergy;
	bool batteryChangeVertex;
	int numberOfUsedBatteries;
};

#endif /* DRONEVERTEX_H_ */
