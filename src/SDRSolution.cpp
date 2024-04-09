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

	//drone travel cost
	float droneCost = 0.0;

	//Get the ship list
	vector<Ship*> shipList = data->getShipList();
	vector<Ship*>::iterator itShip = shipList.begin();
	for(;itShip != shipList.end(); itShip++)
	{
		Ship* ship = *itShip;

		//Calculate ship route cost
		map<Ship*, ShipRoute* >::iterator itRoute = this->shipRoute.find(ship);
		if(itRoute != this->shipRoute.end())
		{
			ShipRoute* sRoute = itRoute->second;
			if(sRoute == NULL) continue;
			vector<ShipVertex*> route = sRoute->getShipRouteVertices();

			vector<ShipVertex*>::iterator itVertex = route.begin();
			ShipVertex* i = *itVertex;
			itVertex++;
			for(;itVertex != route.end(); itVertex++)
			{
				ShipVertex* j = *itVertex;
				shipCost += ship->calculateEdgeCost(i,j);
			}

			//TODO custo de reposicionamento do navio

		}

		//For each drone, calculate drone route cost
		vector<Drone*> droneList = ship->getDroneList();
		vector<Drone*>::iterator itDrone = droneList.begin();
		for(;itDrone != droneList.end(); itDrone++)
		{
			Drone* drone = *itDrone;
			map<pair<Ship*,Drone*>, DroneRoute* >::iterator itShipDroneRoute
													=  shipDroneRoute.find(make_pair(ship, drone));
			if(itShipDroneRoute != shipDroneRoute.end())
			{
				if(itShipDroneRoute->second == NULL) continue;
				DroneRoute* dRoute = itShipDroneRoute->second;
				vector<DroneVertex*> droneRoute = dRoute->getDroneVertices();
				vector<DroneVertex*>::iterator itVertexDroneRoute = droneRoute.begin();
				DroneVertex* i = *itVertexDroneRoute;
				itVertexDroneRoute++;
				for(;itVertexDroneRoute != droneRoute.end(); itVertexDroneRoute++)
				{
					DroneVertex* j = *itVertexDroneRoute;
					droneCost += drone->calculateEdgeCost(i,j);
				}
			}

		}

	}

	return shipCost + droneCost;
}

