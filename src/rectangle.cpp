#include "rectangle.h"


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

Rectangle& Rectangle::setHeight(double height) {
    mHeight = height;
    return *this;
}

Rectangle& Rectangle::setBase(double width) {
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

std::ostream& Rectangle::display(std::ostream& stream) const {
    return stream << "Rectangle Width: " << mWidth
                  << ", Height: "        << mHeight
                  << ", Color: "         << mColor;
}

std::ostream& operator<<(std::ostream& stream, const Rectangle& Rectangle) {
    return Rectangle.display(stream);
}
