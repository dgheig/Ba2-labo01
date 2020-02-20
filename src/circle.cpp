#include <iostream>
#include <cmath>
#include "circle.h"

using namespace std;


Circle::Circle(double radius, Color color) : mRadius(radius), mColor(color) {}

void Circle::setRadius(double radius) {
    mRadius = radius;
}

void Circle::setColor(Color::Code color) {
    mColor.setColor(color);
}

double Circle::getRadius() const {
    return mRadius;
}

double Circle::getSurface() const {
    return M_PI() * pow(mRadius, 2);
}

Color::Code getColor() const {
    return mColor.getColor();
}

ostream& Circle::display(ostream& stream) const {
    stream << "Circle : " << endl
           << "Radius : " << mRadius << endl
           << "Color  : " << mColor  << endl;
}

ostream& operator<<(ostream& stream, const Circle& circle) {
    return circle.display();
}