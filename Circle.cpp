#include "Circle.h"

double Circle::area() const {
    return 3.14 * l * l;
}

double Circle::parimeter() const {
    return 2 * 3.14 * l;
}

void Circle::print() const {
    middle.print();
    std::cout << l << std::endl;
}