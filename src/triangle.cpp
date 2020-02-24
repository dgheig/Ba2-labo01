/*
-----------------------------------------------------------------------------------
Laboratoire : labo_01
Fichier     : triangle.cpp
Auteur(s)   : Emmanuelle Comte et David Gallay
Date        : 24.02.2020

But         : Function définition for header triangle.h
Remarque(s) :
Compilateur : MinGW-g++ 6.3.0 and g++ 7.4.0
-----------------------------------------------------------------------------------*/

#include "triangle.h"

using namespace std;

Triangle::Triangle(double base, double height, const Color& color): mBase(base), mHeight(height), mColor(color) {

}

Triangle::Triangle(const Color& color): Triangle() {
    setColor(color);
}

Triangle::Triangle(Color::Code code): Triangle(Color(code)) {

}

double Triangle::getHeight() const {
    return mHeight;
}

double Triangle::getBase() const {
    return mBase;
}

double Triangle::getSurface() const {
    return mBase * mHeight / 2.;
}

Color Triangle::getColor() const {
    return mColor;
}

Triangle& Triangle::setHeight(double height) {
    mHeight = height;
    return *this;
}

Triangle& Triangle::setBase(double base) {
    mBase = base;
    return *this;
}

Triangle& Triangle::setColor(const Color& color) {
    mColor = color;
    return *this;
}

Triangle& Triangle::setColor(Color::Code color) {
    setColor(Color(color));
    return *this;
}

ostream& Triangle::display(ostream& stream) const {
    return stream << "Triangle Base: " << mBase
                  << ", Height: "      << mHeight
                  << ", Color: "       << mColor;
}

ostream& operator<<(ostream& stream, const Triangle& triangle) {
    return triangle.display(stream);
}
