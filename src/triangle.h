#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include "color.h"

class Triangle {

    public:
        /**
         * @breif Create a triangle with a base, a height and a color, a base and 
         *        a height, a base or with nothing
         * @param base   defalut value 0
         * @param height default value 0
         * @param color  default value Color()
         */
        Triangle(double base = 0, double height = 0, const Color& color = Color());
        /**
         * @breif Create a triangle with an object color
         * @param color
         */
        Triangle(const Color& color);
        /**
         * @breif Create a triangle with a color code (enum)
         * @param code
         */
        Triangle(Color::Code code);

        /**
         * @breif  Get the height of the triangle
         * @return The height of the triangle
         */
        double getHeight() const;
        /**
         * @breif  Get the base of the triangle 
         * @return The base of the triangle
         */
        double getBase() const;
        /**
         * @breif  Calculat the surface of the triangle
         * @return The surface of the triangle
         */
        double getSurface() const;
        /**
         * @brief  Get the color of the triangle
         * @return The color of the triangle
         */
        Color::Code getColor() const;

        /**
         * @breif  Change the height of the triangle
         * @param  height
         * @return The triangle
         */
        Triangle& setHeight(double height);
        /**
         * @breif  Change the base of the triangle
         * @param  base
         * @return The triangle
         */
        Triangle& setBase(double base);
        /**
         * @breif  Change the color of the triangle with an object color
         * @param  color
         * @return The triangle
         */
        Triangle& setColor(const Color& color);
        /**
         * @breif  Change the color of the triangle with a color code (enum)
         * @param  color
         * @return The triangle
         */
        Triangle& setColor(Color::Code color);

        /**
         * @breif  Display a triangle
         * @param  stream
         * @return The stream
         */
        std::ostream& display(std::ostream& stream = std::cout) const;

    private:
        double mBase;
        double mHeight;
        Color  mColor;
};

/**
 * @breif  Overload of the output stream to display a triangle
 * @param  stream
 * @param  triangle
 * @return The stream
 */
std::ostream& operator<<(std::ostream& stream, const Triangle& triangle);


#endif // TRIANGLE_H
