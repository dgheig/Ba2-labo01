/*
-----------------------------------------------------------------------------------
Laboratory  : labo_01
File        : color.h
Author(s)   : Emmanuelle Comte et David Gallay
Date        : 20.02.2020

Purpose     : Declare class Color and functions useful for it
Remark(s)   :

                There is the github repository:
                https://github.com/dgheig/Ba2-labo01

Compiler    : MinGW-g++ 6.3.0 and g++ 7.4.0
-----------------------------------------------------------------------------------*/
#ifndef COLOR_H
#define COLOR_H

#include <iostream>
#include <string>

class Color {

    public:
        enum class Code {
            WHITE,
            BLUE,
            GREEN,
            RED,
            BLACK
        };

        /**
         * @brief Create a color with a color by code (enum) or with nothing
         * @param code  default value WHITE
         */
        Color(Code code = Code::WHITE);

        /**
         * @brief  Get the color
         * @return The code of the color (enum)
         */
        Code getColorCode() const;

        /**
         * @brief  Change the color
         * @param  code
         * @return The color
         */
        Color& setColor(Code code);

        /**
         * @brief  Get the name of the color
         * @return The name of the color
         */
        std::string getName() const;

        /**
         * @brief  Display a color
         * @param  stream
         * @return The srteam
         */
        std::ostream& display(std::ostream& stream = std::cout) const;

    private:
        Code mCode;
};

/**
 * @brief  Convert the code color in a string
 * @param  code
 * @return The color in string
 */
std::string toString(const Color::Code& code);

/**
 * @brief  Overload of the output sream to display a color
 * @param  stream
 * @param  color
 * @return The stream
 */
std::ostream& operator<<(std::ostream& stream, const Color& color);

#endif // COLOR_H
