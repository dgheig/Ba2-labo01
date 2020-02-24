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

Color::Code Circle::getColor() const {
    return mColor.getColor();
}

ostream& Circle::display(ostream& stream) const {
    return stream << "Circle Radius : " << mRadius 
                  << ", Color  : "      << mColor  << endl;
}

ostream& operator<<(ostream& stream, const Circle& circle) {
    return circle.display(stream);
}
