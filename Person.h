/*
 * Person.h
 *
 *  Created on: 10 de jul de 2018
 *      Author: qualcomm
 */

#ifndef PERSON_H_
#define PERSON_H_

class Person {
private:
	int age;
	double height;
	double weight;
	char name;
public:
	Person();
	virtual ~Person();
	void ModifyPerson();
};

#endif /* PERSON_H_ */
