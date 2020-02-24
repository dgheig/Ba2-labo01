/*
-----------------------------------------------------------------------------------
Laboratory  : labo_01
File        : rectangle.h
Author(s)   : Emmanuelle Comte et David Gallay
Date        : 20.02.2020

Purpose     : Declare class Rectangle and functions useful for it
Remark(s)   :

                There is the github repository:
                https://github.com/dgheig/Ba2-labo01

Compiler    : MinGW-g++ 6.3.0 and g++ 7.4.0
-----------------------------------------------------------------------------------*/
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "color.h"

class Rectangle {

    public:
        /**
         * @brief Create a rectangle with a width, a height and a color, a width and
         *        a height, a width or with nothing
         * @param width  default value 0
         * @param height default value 0
         * @param color  default value Color()
         */
        Rectangle(double width = 0, double height = 0, const Color& color = Color());

        /**
         * @brief Create a rectangle with an object color
         * @param color
         */
        Rectangle(const Color& color);

        /**
         * @brief Create a rectangle with a color code (enum)
         * @param code
         */
        Rectangle(Color::Code code);

        /**
         * @brief  Get the height of the rectangle
         * @return The height of the rectangle
         */
        double getHeight() const;

        /**
         * @brief  Get the width of the rectangle
         * @return The width of the rectangle
         */
        double getWidth() const;

        /**
         * @brief  Calculate the surface of the rectangle
         * @return The surface f the rectangle
         */
        double getSurface() const;

        /**
         * @brief  Get the color of the rectangle
         * @return The color of the rectangle
         */
        Color getColor() const;

        /**
         * @brief  Change the height of the rectangle
         * @param  height
         * @return The rectangle
         */
        Rectangle& setHeight(double height);

        /**
         * @brief  Change the width of the rectangle
         * @param  base
         * @return The rectangle
         */
        Rectangle& setWidth(double width);

        /**
         * @brief  Change the color of the rectangle with an object color
         * @param  color
         * @return The rectangle
         */
        Rectangle& setColor(const Color& color);

        /**
         * @brief  Change the color of the rectangle with a color code (enum)
         * @param  color
         * @return The rectangle
         */
        Rectangle& setColor(Color::Code color);

        /**
         * @brief  Display a rectangle
         * @param  stream
         * @return The stream
         */
        std::ostream& display(std::ostream& stream = std::cout) const;

    private:
        double mWidth;
        double mHeight;
        Color  mColor;
};

/**
 * @brief  Overload of the output stream to display a rectangle
 * @param  stream
 * @param  rectangle
 * @return The stream
 */
std::ostream& operator<<(std::ostream& stream, const Rectangle& rectangle);

#endif // RECTANGLE_H
