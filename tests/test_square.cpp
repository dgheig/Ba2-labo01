/*
-----------------------------------------------------------------------------------
Laboratoire : labo_01
Fichier     : model.cpp
Auteur(s)   : Emmanuelle Comte et David Gallay
Date        : 24.02.2020

But         : Test features of class Circle
Remarque(s) :
Compilateur :
-----------------------------------------------------------------------------------*/

#include <iostream>
#include "../src/color.h"
#include "../src/square.h"
using namespace std;


int main() {

    Color c(Color::Code::GREEN);

    Square square1;
    Square square2(5);
    Square square3(5, c);
    Square square4(c);
    Square square5(Color::Code::BLACK);

    cout << square1 << endl;
    cout << square2 << endl;
    cout << square3 << endl;
    cout << square4 << endl;
    cout << square5 << endl;

    if(square1.setSide(9).getSide() != 9)
        return EXIT_FAILURE;

    if(square5.setColor(c).getColor().getColorCode() != c.getColorCode())
        return EXIT_FAILURE;

    return EXIT_SUCCESS;
}
