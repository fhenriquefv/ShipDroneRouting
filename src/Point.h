/*
 * Customer.h
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#ifndef POINT_H_
#define POINT_H_
#include <string>

using namespace std;


class Point {
public:
	Point();
	virtual ~Point();

	const int getId(){return id;}
	void setId(const int id){this->id = id;}

	const float getLatitude(){return latitude;}
	void setLatitude(const float latitude){this->latitude = latitude;}

	const float getLongitude(){return longitude;}
	void setLongitude(const float longitude){this->longitude = longitude;}

	const int getPointType(){return pointType;}
	void setPointType(const int pointType){this->pointType = pointType;}

	const string toString();

	float getDistance(Point* point);

	static int CUSTOMER_POINT;
	static int TERMINAL_POINT;

private:
	int id;
	float latitude;
	float longitude;
	int pointType;
};

#endif /* POINT_H_ */
