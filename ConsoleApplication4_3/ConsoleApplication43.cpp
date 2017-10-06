// ConsoleApplication43.cpp: 定义控制台应用程序的入口点。
//4.3.cpp

#include "stdafx.h"
#include<iostream>
using namespace std;

const float pi = 3.141593;
const float fprice = 35;
const float cprice = 20;

class circle {
public:
	circle(float r);
	float circumference();
	float area();
private:
	float radius;
};

circle::circle(float r) {
	radius = r;
}

float circle::circumference() {
	return 2 * pi*radius;
}

float circle::area() {
	return pi*radius*radius;
}

int main()
{
	float radius;
	cout << "please enter radius:";
	cin >> radius;
	circle pool(radius);
	circle poolrim(radius + 3);
	float fencecost = poolrim.circumference()*fprice;
	cout << "fenceing cost id $" << fencecost << endl;

	float concretecost = (poolrim.area() - pool.area())*cprice;
	cout << "concrete cost is $" << concretecost << endl;
	return 0;
}

