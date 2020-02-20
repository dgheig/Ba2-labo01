#ifndef CIRCLE_H
#define CIRCLE_H

#include "color.h"

class Circle {
    public:
        Circle(double radius = 0);
        void setRadius(double radius);
        double getRadius() const;
        double getSurface() const;
        std::ostream& display(std::ostream& stream = std::cout) const;
    private:
        double mRadius;
        Color mColor;
    
};

std::ostream& operator<<(std::ostream& stream, const Circle& circle);

#endif // CIRCLE_H