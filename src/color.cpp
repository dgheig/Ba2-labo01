#include "color.h"


Color::Color(Code code): mCode(code) {

}

Color::Code Color::getColor() const {
    return mCode;
}

Color& Color::setColor(Code code) {
    mCode = code;
    return *this;
}

std::string Color::getName() const {
    return toString(mCode);
}

std::string toString(const Color::Code& code) {
    switch (code)
    {
        case Color::Code::WHITE:
            return "white";
        case Color::Code::BLUE:
            return "blue";
        case Color::Code::GREEN:
            return "green";
        case Color::Code::RED:
            return "red";
        case Color::Code::BLACK:
            return "black";

        default:
            return "unknown";
    }
    return "unknown";
}

std::ostream& Color::display(std::ostream& stream) const {
    return stream << getName();
}

std::ostream& operator<<(std::ostream& stream, const Color& color) {
    return color.display(stream);
}


