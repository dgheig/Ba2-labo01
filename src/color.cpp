#include "color.h"

using namespace std;

Color::Color(Code code): mCode(code) {

}

Color::Code Color::getColor() const {
    return mCode;
}

Color& Color::setColor(Code code) {
    mCode = code;
    return *this;
}

string Color::getName() const {
    return toString(mCode);
}

string toString(const Color::Code& code) {
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

ostream& Color::display(ostream& stream) const {
    return stream << getName();
}

ostream& operator<<(ostream& stream, const Color& color) {
    return color.display(stream);
}


