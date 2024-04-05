/*
 * Vertex.h
 *
 *  Created on: 5 de abr. de 2024
 *      Author: 55219
 */

#ifndef VERTEX_H_
#define VERTEX_H_

#include "Point.h"

class Vertex {
public:
	Vertex();
	virtual ~Vertex();

	Point* getPoint(){return point;}
	void setPoint(Point* point){this->point = point;}

	float getOutputVelocity(){return outputVelocity;}
	void setOutputVelocity(float velocity) {this->outputVelocity = velocity;}

	float getOutputWeight(){return outputWeight;}
	void setOutputWeight(float weight) {this->outputWeight = weight;}

private:

	Point* point;
	float outputVelocity;
	float outputWeight;

};

#endif /* VERTEX_H_ */
