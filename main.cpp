// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"

int main()
{
	//Shape s1;
	//twoD d2;
	//threeD d3;
	twoD d(5.2, "twoD");
	cout << d.getsize() << endl;
	cout << d.getName() << endl;
	return 0;
}
