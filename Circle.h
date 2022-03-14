#include <iostream>
#include "Point.h"
#ifndef PKLAB1_CIRCLE_H
#define PKLAB1_CIRCLE_H


class Circle {
private:
    Point middle;
    double l;

public:
    enum Poz{ROZ_ZEW, STY_ZEW, PRZE, STY_WEW, ROZ_WEW, WSP};
    Circle(double x, double y, double l) : middle(x,y), l(l) {}
    Circle(Point p, double l) : middle(p), l(l) {}
    Circle(const Circle &circle) : middle(circle.middle), l(circle.l){}
    double area() const ;
    double parimeter() const;
    void print() const;

    static Poz circleLocation(Circle c1, Circle c2) {
        if (Point::isEqual(c1.middle,c2.middle))
            return WSP;
        double odlSr = Point::distance(c1.middle,c2.middle);
//        if (odlSr < c1.l || odlSr < c2.l) {
//            if ()
//        }
        return WSP;
    }

};


#endif //PKLAB1_CIRCLE_H
