#include "Point.h"

Point::Point(int _x, int _y) : x(_x), y(_y) {}

void Point::print() {
	cout << x << ", " << y;
}

int Point::get_x() { return x; }
int Point::get_y() { return y; }

Point Point::operator+(Point& _point) {
	return Point(x + _point.x, y + _point.y);
}

Point Point::operator+(int _value) {
	return Point(x + _value, y + _value);
}

Point operator-(Point& _left, Point& _right) {
	return Point(
		_left.get_x() - _right.get_x(),
		_left.get_y() - _right.get_y()
	);
}

Point& operator+=(Point& _left, Point& _right) {
	_left.x += _right.get_x();
	_left.y += _right.get_y();
	
	return _left;
}

ostream& operator<<(ostream& _stream,Point& _point) {
	_stream << _point.x << ", " << _point.y;
	return _stream;
}