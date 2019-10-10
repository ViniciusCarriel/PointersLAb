/*
 * PointersLab.cpp
 *
 *  Created on: 10 de jul de 2018
 *      Author: qualcomm
 */


#include <iostream>
#include "Math.cpp"

using namespace std;

void PassByValue(int num){
	num++;
	cout << "Pass by Value: num contains " << num << endl;
}
void PassByRef(int &num){
	num = 50;
	cout << "Pass by Ref: num contains " << num << endl;
}

class Person{
public:
	int age;
	double height;
	double weight;
	string name;
	Person(int newage, double newheight, double newweight, string newname){
		age = newage;
		height = newheight;
		weight = newweight;
		name = newname;
	}
	void ModifyPerson(string newname){name = newname;}
	string getName(){return this->name;}
};

int main()
{
	int num1;
	int numPoint;
	int* pNum = &numPoint;

	num1 = 3;
	*pNum = 5;

	PassByValue(num1);
	cout << "After PassByValue num1 contains " << num1 << endl;

	PassByRef(*pNum);
	cout << "After PassByValue pNum contains " << *pNum << endl;

	double* numDouble = new double;
	*numDouble = 4.1;
	cout << "Double dereferenced value is  " << *numDouble << endl;

	delete numDouble;
	cout << "Double deleted value is  " << *numDouble << endl;

	Person *p1 = new Person(30,178,80,string("vini"));

	p1->ModifyPerson("Vini Carriel");

	cout << "Name after modification:  " << p1->name << endl;

	//Math *math = new Math();
	//int result = math->pow(2,8);
	int result = Math::pow(2,8);
	cout << "2 to the power of 8:  " << result << endl;

}

