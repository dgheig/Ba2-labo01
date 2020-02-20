#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "color.h"

class Rectangle {
    public:
        Rectangle(double width = 0, double height = 0);

        double getHeight() const;
        double getWidth() const;
        double getSurface() const;

        void setHeight(double height);
        void setBase(double base);

        std::ostream& display(std::ostream& stream = std::cout) const;


    private:
        Color mColor;
        double mWidht;
        double mHeight;
};


std::ostream& operator<<(std::ostream& stream, const Rectangle& rectangle);

#endif // RECTANGLE_H