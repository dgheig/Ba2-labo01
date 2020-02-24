#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include "color.h"

class Square {

    public:

        /**
         * @brief Create a square with a side and a color, a side or with nothing
         * @param side  defalut value 0
         * @param color default value Color()
         */
        Square(double side = 0, const Color& color = Color());

        /**
         * @brief Create a square with an object color
         * @param color
         */
        Square(const Color& color);

        /**
         * @brief Create a square with a color code (enum)
         * @param code
         */
        Square(Color::Code code);

        /**
         * @brief  Get the side of the square
         * @return The side of the square
         */
        double getSide() const;

        /**
         * @brief  Calculate the surface of the square
         * @return The surface of the square
         */
        double getSurface() const;

        /**
         * @brief  Get the color of the square
         * @return The color of the square
         */
        Color getColor() const;

        /**
         * @brief  Change the side of the square
         * @param  side
         * @return The square
         */
        Square& setSide(double side);

        /**
         * @brief  Change the color of the square with an object color
         * @param  color
         * @return The square
         */
        Square& setColor(const Color& color);

        /**
         * @brief  Change the color of the square with a color code (enum)
         * @param  color
         * @return The square
         */
        Square& setColor(Color::Code color);

        /**
         * @brief  Display a square
         * @param  stream
         * @return The stream
         */
        std::ostream& display(std::ostream& stream = std::cout) const;

    private:
        double mSide;
        Color  mColor;
};

/**
 * @brief  Overload of the output stream to display a square
 * @param  stream
 * @param  square
 * @return The stream
 */
std::ostream& operator<<(std::ostream& stream, const Square& square);


#endif // SQUARE_H
