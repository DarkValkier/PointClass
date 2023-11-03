#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    Point p1(5, 5);
    Point p2(10, 15);
    Point p3 = p1 + p2;
    Point p4 = p3 - p2;
    Point p5 = p2 + 14;

    cout << "P1: (" << p1 << ")" << endl;
    cout << "P2: (" << p2 << ")" << endl;
    cout << "P3: (" << p3 << ")" << endl;
    cout << "P4: (" << p4 << ")" << endl;
    cout << "P5: (" << p5 << ")" << endl;

    p2 += p3;
    cout << "P2: (" << p2 << ")" << endl;
}