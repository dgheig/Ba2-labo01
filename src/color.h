#ifndef COLOR_H
#define COLOR_H

#include <iostream>
#include <string>

class Color {
    public:
        enum Code {
            WHITE,
            BLUE,
            GREEN,
            RED,
            BLACK
        };
        Color(Code code = WHITE);

        Code getColor() const;
        void setColor(Code code);

        std::string nom() const;

        std::ostream& display(std::ostream& stream = std::cout) const;

    private:
        Code mCode;



};

std::ostream& operator<<(std::ostream& stream, const Color& color);



#endif // COLOR_H