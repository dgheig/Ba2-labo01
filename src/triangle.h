#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include "color.h"

class Triangle {

    public:
        Triangle(double base = 0, double height = 0);

        double getHeight() const;
        double getBase() const;
        double getSurface() const;

        void setHeight(double height);
        void setBase(double base);

        std::ostream& display(std::ostream& stream = std::cout) const;

    private:
        double mBase;
        double mHeight;
        Color mColor;
};

std::ostream& operator<<(std::ostream& stream, const Triangle& triangle);


#endif // TRIANGLE_H