/*
 * SDRSolution.cpp
 *
 *  Created on: 19 de fev. de 2024
 *      Author: 55219
 */

#include "SDRSolution.h"
#include "ProblemData.h"

SDRSolution::SDRSolution() {
	// TODO Auto-generated constructor stub

}

SDRSolution::~SDRSolution() {
	// TODO Auto-generated destructor stub
}

float SDRSolution::calculateObjectiveFunction()
{
	// Get the problem data object
	ProblemData* data = ProblemData::getInstance();

	//ship travel cost
	float shipCost = 0.0;

	//Get the ship list
	vector<Ship*> shipList = data->getShipList();
	vector<Ship*>::iterator itShip = shipList.begin();
	for(;itShip != shipList.end(); itShip++)
	{
		Ship* ship = *itShip;

		//Calculate ship route cost
		map<Ship*, vector<Vertex*> >::iterator itRoute = this->shipRoute.find(ship);
		if(itRoute != this->shipRoute.end())
		{
			vector<Vertex*> route = itRoute->second;

			vector<Vertex*>::iterator itVertex = route.begin();
			Vertex* i = *itVertex;
			itVertex++;
			for(;itVertex != route.end(); itVertex++)
			{
				Vertex* j = *itVertex;
				shipCost += ship->calculateEdgeCost(i,j);
			}

			//TODO custo de reposicionamento do navio

		}

		//For each drone, calculate drone route cost
		//map<pair<Ship*,Drone*>, vector<Vertex*> >::iterator itShipDroneRoute =  shipDroneRoute.find(make_pair())

	}

	return 0.0;
}

