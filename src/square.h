#ifndef SQUARE_H
#define SQUARE_H

#include "color.h"

class Square {
    public:
        Square(double side = 0, const Color& color = Color());

        double getSide() const;
        double getSurface() const;
        Color::Code getColor() const;

        Square& setSide(double side);
        Square& setColor(const Color& color);
        Square& setColor(Color::Code color);

        std::ostream& display(std::ostream& stream = std::cout) const;


    private:
        double mSide;
        Color mColor;
};


std::ostream& operator<<(std::ostream& stream, const Square& square);


#endif // SQUARE_H