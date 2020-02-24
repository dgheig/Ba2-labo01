/*
-----------------------------------------------------------------------------------
Laboratoire : labo_01
Fichier     : square.cpp
Auteur(s)   : Emmanuelle Comte et David Gallay
Date        : 24.02.2020

But         : Function définition for header square.h
Remarque(s) :
Compilateur : MinGW-g++ 6.3.0 and g++ 7.4.0
-----------------------------------------------------------------------------------*/

#include "square.h"

using namespace std;

Square::Square(double side, const Color& color): mSide(side), mColor(color) {

}

Square::Square(const Color& color): Square() {
    setColor(color);
}

Square::Square(Color::Code code): Square(Color(code)) {

}

double Square::getSide() const {
    return mSide;
}

double Square::getSurface() const {
    return mSide * mSide;
}

Color Square::getColor() const {
    return mColor;
}

Square& Square::setSide(double side) {
    mSide = side;
    return *this;
}

Square& Square::setColor(const Color& color) {
    mColor = color;
    return *this;
}

Square& Square::setColor(Color::Code color) {
    setColor(Color(color));
    return *this;
}

ostream& Square::display(ostream& stream) const {
    return stream << "Square Width: " << mSide << ", Color: " << mColor;
}

ostream& operator<<(ostream& stream, const Square& square) {
    return square.display(stream);
}
