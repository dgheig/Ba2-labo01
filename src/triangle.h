#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include "color.h"

class Triangle {

    public:
        Triangle(double base = 0, double height = 0, const Color& color = Color());
        Triangle(const Color& color);
        Triangle(Color::Code code);

        double getHeight() const;
        double getBase() const;
        double getSurface() const;

        Triangle& setHeight(double height);
        Triangle& setBase(double base);
        Triangle& setColor(const Color& color);
        Triangle& setColor(Color::Code color);

        std::ostream& display(std::ostream& stream = std::cout) const;

    private:
        double mBase;
        double mHeight;
        Color mColor;
};

std::ostream& operator<<(std::ostream& stream, const Triangle& triangle);


#endif // TRIANGLE_H
