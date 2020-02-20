#include "color.h"


Color::Color(Code code): mCode(code) {

}

Color::Code Color::getColor() const {

}

void Color::setColor(Code code) const {

}

std::string Color::nom() const {
    switch (mCode)
    {
        case WHITE:
            return "white";
        case BLUE:
            return "blue";
        case GREEN:
            return "green";
        case RED:
            return "red";
        case BLACK:
            return "black";

        default:
            return "unknown";
    }
}

std::ostream& Color::display(std::ostream& stream = std::cout) const {
    return stream << nom();
}

std::ostream& operator<<(std::ostream& stream, const Color& color) {
    return color.display(stream);
}


