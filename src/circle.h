#ifndef CIRCLE_H
#define CIRCLE_H

#include "color.h"

class Circle {
    public:
        Circle(double radius = 0, const Color& color = Color());

        Circle& setRadius(double radius);
        Circle& setColor(const Color& color);
        Circle& setColor(Color::Code color);

        double getRadius() const;
        double getSurface() const;
        Color::Code getColor() const;

        std::ostream& display(std::ostream& stream = std::cout) const;
    private:
        double mRadius;
        Color mColor;

};

std::ostream& operator<<(std::ostream& stream, const Circle& circle);

#endif // CIRCLE_H