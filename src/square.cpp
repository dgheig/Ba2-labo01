#include <iostream>
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

Color::Code Square::getColor() const {
    return mColor.getColor();
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
    return stream << "Width: " << mSide << ", Color: " << mColor;
}

ostream& operator<<(ostream& stream, const Square& square) {
    return square.display(stream);
}
