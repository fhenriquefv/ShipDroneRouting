/*
 * Main.cpp
 *
 *  Created on: 15 de fev. de 2024
 *      Author: 55219
 */
#include "ProblemData.h"

int main(int argc, char **argv) {
	ProblemData* data = ProblemData::getInstance();
	data->generateRandomInstance(2,2,"instances/30-small-instances/A-n8-1");
}


