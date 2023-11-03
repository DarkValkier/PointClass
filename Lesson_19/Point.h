#pragma once
#include <iostream>

using namespace std;

class Point
{
	int x, y;
public:
	Point(int = 0, int = 0);
	void print();

	int get_x();
	int get_y();
	Point operator+(Point&);
	Point operator+(int);
	friend Point& operator+=(Point&, Point&);
	friend ostream& operator<<(ostream&, Point&);
};

Point operator-(Point&, Point&);

Point& operator+=(Point&, Point&);

ostream& operator<<(ostream&, Point&);