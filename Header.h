#pragma once
#include <iostream>
#include <string>
#define PI 3.14
using namespace std;
class Shape {

};	

class threeD : public Shape {
};
class twoD : public Shape {
};
class Circle : public twoD {

};

class Square :public twoD {

};

class Cube : public threeD {

};