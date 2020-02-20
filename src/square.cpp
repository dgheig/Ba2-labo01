#include <iostream>
#include "square.h"

using namespace std;

Square::Square(double side, Color color) : mSide(side), mColor(Color) {}

double Square::getSide() const {
    return mSide;
}
double Square::getSurface() const {
    return mSide * mSide
}
Color::Code Square::getColor() const {
    return mCOlor.getColor();
}

void Square::setSide(double side) {
    
}
void Square::setColor(Color::Code color) {
    
}
        
ostream& Square::display(ostream& stream) const {
    return stream;
}
        
ostream& operator<<(ostream& stream, const Square& square) {
    return square.display(stream);
}