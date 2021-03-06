/*
-----------------------------------------------------------------------------------
Laboratoire : labo_01
Fichier     : circle.cpp
Auteur(s)   : Emmanuelle Comte et David Gallay
Date        : 24.02.2020

But         : Function definition for header circle.h
Remarque(s) :
Compilateur : MinGW-g++ 6.3.0 and g++ 7.4.0
-----------------------------------------------------------------------------------*/

#define _USE_MATH_DEFINES // M_PI

#include <cmath>
#include "circle.h"

using namespace std;


Circle::Circle(double radius, const Color& color): mRadius(radius), mColor(color) {

}

Circle::Circle(const Color& color): Circle() {
    setColor(color);
}

Circle::Circle(Color::Code code): Circle(Color(code)) {

}

Circle& Circle::setRadius(double radius) {
    mRadius = radius;
    return *this;
}

Circle& Circle::setColor(const Color& color) {
    mColor = color;
    return *this;
}

Circle& Circle::setColor(Color::Code color) {
    setColor(Color(color));
    return *this;
}

double Circle::getRadius() const {
    return mRadius;
}

double Circle::getSurface() const {
    return M_PI * pow(mRadius, 2);
}

Color Circle::getColor() const {
    return mColor;
}

ostream& Circle::display(ostream& stream) const {
    return stream << "Circle Radius : " << mRadius
                  << ", Color  : "      << mColor  << endl;
}

ostream& operator<<(ostream& stream, const Circle& circle) {
    return circle.display(stream);
}
