#include "triangle.h"


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

std::ostream& Triangle::display(std::ostream& stream) const {
    return stream << "Triangle Base: " << mBase
                  << ", Height: "      << mHeight
                  << ", Color: "       << mColor;
}

std::ostream& operator<<(std::ostream& stream, const Triangle& triangle) {
    return triangle.display(stream);
}
