#include "rectangle.h"


Rectangle::Rectangle(double width, double height): mWidth(width), mHeight(height), mColor() {

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

void Rectangle::setHeight(double height) {
    mHeight = height;
}
void Rectangle::setBase(double width) {
    mWidth = width;
}

std::ostream& Rectangle::display(std::ostream& stream) const {
    stream << "Width: " << mWidth << ", Height: " << mHeight;
}

std::ostream& operator<<(std::ostream& stream, const Rectangle& Rectangle) {
    return Rectangle.display(stream);
}
