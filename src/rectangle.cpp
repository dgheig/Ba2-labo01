/*
-----------------------------------------------------------------------------------
Laboratoire : labo_01
Fichier     : rectangle.cpp
Auteur(s)   : Emmanuelle Comte et David Gallay
Date        : 24.02.2020

But         : Function definition for header rectangle.h
Remarque(s) :
Compilateur : MinGW-g++ 6.3.0 and g++ 7.4.0
-----------------------------------------------------------------------------------*/

#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(double width, double height, const Color& color): mWidth(width), mHeight(height), mColor(color) {

}

Rectangle::Rectangle(const Color& color): Rectangle() {
    setColor(color);
}

Rectangle::Rectangle(Color::Code code): Rectangle(Color(code)) {

}

double Rectangle::getHeight() const {
    return mHeight;
}

double Rectangle::getWidth() const {
    return mWidth;
}

double Rectangle::getSurface() const {
    return mWidth * mHeight;
}

Color Rectangle::getColor() const {
    return mColor;
}

Rectangle& Rectangle::setHeight(double height) {
    mHeight = height;
    return *this;
}

Rectangle& Rectangle::setWidth(double width) {
    mWidth = width;
    return *this;
}

Rectangle& Rectangle::setColor(const Color& color) {
    mColor = color;
    return *this;
}

Rectangle& Rectangle::setColor(Color::Code color) {
    setColor(Color(color));
    return *this;
}

ostream& Rectangle::display(ostream& stream) const {
    return stream << "Rectangle Width: " << mWidth
                  << ", Height: "        << mHeight
                  << ", Color: "         << mColor;
}

ostream& operator<<(ostream& stream, const Rectangle& Rectangle) {
    return Rectangle.display(stream);
}
