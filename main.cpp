#include <iostream>
#include "Circle.h"
#include "Point.h"

int main() {
    Point p1(4.0,4.0);
    Point p2(2.0,4.0);
    Circle c1(p1,4);
    c1.print();


    return 0;
}
