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

        Color(Code code = Code::WHITE);

        Code getColor() const;
        Color& setColor(Code code);

        std::string getName() const;

        std::ostream& display(std::ostream& stream = std::cout) const;

    private:
        Code mCode;



};

std::string toString(const Color::Code& code);

std::ostream& operator<<(std::ostream& stream, const Color& color);



#endif // COLOR_H