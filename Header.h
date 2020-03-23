#pragma once
#include <iostream>
#include <string>
#define PI 3.14
using namespace std;
//this is my comment
class Shape {
protected:

public:
	Shape() {
		cout << "A shape is created" << endl;
	}

	~Shape() {
		cout << "A shape is destroyed" << endl;
	}
};	

class twoD : public Shape {
private:
	double size;
	string name;

public:
	twoD(double s,string n) :size(s),name(n) {
		cout << "twoD is created" << endl;
	}

	~twoD() {
		cout << "twoD is destroyed" << endl;
	}

	double getsize() {
		return size;
	}

	void set2D(double s) {
		size = s;
	}

	virtual double area() {
		return 0;
	}

	void setName(string n) {
		name = n;
	}

	string getName() {
		return name;
	}
};

class threeD : public Shape {
private:
	double CubeSide;
	string name;
public:
	threeD(double s,string n) :CubeSide(s),name(n) {
		cout << "threeD is created" << endl;
	}

	~threeD() {
		cout << "threeD is destroyed" << endl;
	}

	double get3D() {
		return CubeSide;
	}

	void set3D(double s) {
		CubeSide = s;
	}

};
//another comment
class Circle : public twoD {
private:
	double x, y;

public:
	Circle(double a, double b, double r) : twoD(r,"Circle"),x(a),y(b) {
	}

	double area() {
		return PI * twoD::getsize() * twoD::getsize();
	}
};

class Square :public twoD {
private:
	double x, y;

public:
	Square(double a, double b, double side) :twoD(side,"Square"),x(a),y(b) {
	}
};

class Cube : public threeD {

};