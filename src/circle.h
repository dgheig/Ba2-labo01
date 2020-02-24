#ifndef CIRCLE_H
#define CIRCLE_H

#include "color.h"

class Circle {

    public:
        /**
         * @brief Create a circle with color and radius, a radius or with nothing
         * @param radius default value 0
         * @param color  default value Color()
         */
        Circle(double radius = 0, const Color& color = Color());

        /**
         * @brief Create a circle with an object color
         * @param color
         */
        Circle(const Color& color);

        /**
         * @brief Create a circle with a color by a color code (enum)
         * @param code
         */
        Circle(Color::Code code);

        /**
         * @brief  Change the radius of the circle
         * @param  radius
         * @return The circle
         */
        Circle& setRadius(double radius);

        /**
         * @brief  Change the color of the circle with an object color
         * @param  color
         * @return The circle
         */
        Circle& setColor(const Color& color);

        /**
         * @brief  Change the color of the circle with a color code (enum)
         * @param  color
         * @return The circle
         */
        Circle& setColor(Color::Code color);

        /**
         * @brief  Get the radius of the circle
         * @return The radius of the circle
         */
        double getRadius() const;

        /**
         * @brief  Calculate the surface of the circle
         * @return The surface of the circle
         */
        double getSurface() const;

        /**
         * @brief  Get the color of the circle
         * @return The color of the circle
         */
        Color::Code getColor() const;

        /**
         * @brief  Display a circle
         * @param  stream  default valut cout
         * @return The stream
         */
        std::ostream& display(std::ostream& stream = std::cout) const;

    private:
        double mRadius;
        Color  mColor;

};

/**
 * @brief  Overload of the output stream to display a circle
 * @param  stream
 * @param  circle
 * @return The stream
 */
std::ostream& operator<<(std::ostream& stream, const Circle& circle);

#endif // CIRCLE_H
