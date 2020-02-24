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
