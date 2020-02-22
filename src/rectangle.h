#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "color.h"

class Rectangle {
    public:
        Rectangle(double width = 0, double height = 0, const Color& color = Color());

        double getHeight() const;
        double getWidth() const;
        double getSurface() const;
        Color::Code getColor() const;

        Rectangle& setHeight(double height);
        Rectangle& setBase(double base);
        Rectangle& setColor(const Color& color);
        Rectangle& setColor(Color::Code color);

        std::ostream& display(std::ostream& stream = std::cout) const;


    private:
        double mWidth;
        double mHeight;
        Color mColor;
};


std::ostream& operator<<(std::ostream& stream, const Rectangle& rectangle);

#endif // RECTANGLE_H