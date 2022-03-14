#include <iostream>
#include <cmath>
#ifndef PKLAB1_POINT_H
#define PKLAB1_POINT_H


class Point {
public:
    double x;
    double y;

    Point(double x, double y) : x(x), y(y){}
    void print() const;
    static double distance(Point p1, Point p2) {
        return sqrt(pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2));
    }
    static bool isEqual(Point p1, Point p2) {
        return p1.x == p2.x && p1.y == p2.y;
    }
    static bool isEqual2(Point p1, Point p2) {
        return p1.x == p2.x && p1.y == p2.y;
    }

};


#endif //PKLAB1_POINT_H
