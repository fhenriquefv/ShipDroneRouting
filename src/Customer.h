/*
 * Customer.h
 *
 *  Created on: 13 de fev. de 2024
 *      Author: 55219
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

class Customer {
public:
	Customer();
	virtual ~Customer();

	const int getId(){return id;}
	void setId(const int id){this->id = id;}

	const float getLatitude(){return latitude;}
	void setLatitude(const float latitude){this->latitude = latitude;}

	const float getLongitude(){return longitude;}
	void setLongitude(const float longitude){this->longitude = longitude;}

private:
	int id;
	float latitude;
	float longitude;
};

#endif /* CUSTOMER_H_ */
