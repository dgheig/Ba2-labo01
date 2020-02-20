#include <iostream>
#include <cmath>
#include "circle.h"

using namespace std;


Circle::Circle(double radius) : mRadius(radius) {}

void Circle::setRadius(double radius) {
    mRadius = radius;
}

double Circle::getRadius() const {
    return mRadius;
}

double Circle::getSurface() const {
    return M_PI() * pow(mRadius, 2);
}

ostream& Circle::display(ostream& stream) const {
    
}

ostream& operator<<(ostream& stream, const Circle& circle) {
    return circle.display();
}