/*
 * SDRSolution.h
 *
 *  Created on: 19 de fev. de 2024
 *      Author: 55219
 */

#ifndef SDRSOLUTION_H_
#define SDRSOLUTION_H_

#include <map>
#include "Drone.h"
#include "Point.h"
#include "Ship.h"
#include <vector>
#include "Vertex.h"

using namespace std;
class SDRSolution {

public:
	SDRSolution();
	virtual ~SDRSolution();
	float getCost() {return cost;}
	void setCost(float cost){this->cost = cost;}

	float calculateObjectiveFunction();
private:
	//para cada par ship, drone armazena a rota do respectivo drone
	map<pair<Ship*,Drone*>, vector<Vertex*> > shipDroneRoute;
	//para cada ship, armazena a rota do navio por terminais
	map<Ship*, vector<Vertex*> > shipRoute;

	float cost;
};

#endif /* SDRSOLUTION_H_ */
