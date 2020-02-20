#include "triangle.h"


Triangle::Triangle(double base, double height): mBase(base), mHeight(height), mColor() {

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

void Triangle::setHeight(double height) {
    mHeight = height;
}
void Triangle::setBase(double base) {
    mBase = base;
}

std::ostream& Triangle::display(std::ostream& stream) const {
    return stream << "Base: " << mBase << ", Height: " << mHeight;
}

std::ostream& operator<<(std::ostream& stream, const Triangle& triangle) {
    return triangle.display(stream);
}
