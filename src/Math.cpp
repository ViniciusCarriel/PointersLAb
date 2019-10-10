/*
 * Math.cpp
 *
 *  Created on: 10 de jul de 2018
 *      Author: qualcomm
 */

class Math{

	static int pow(int base,int exp)
	{
		int result = 1;

		for (int i = 0; i < exp; i++)
		{
			result = result * base;
		}

		return result;
	}
};

