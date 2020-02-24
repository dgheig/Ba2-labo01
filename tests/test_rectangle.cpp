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
#include "../src/rectangle.h"
using namespace std;


int main() {

    Color c(Color::Code::GREEN);

    Rectangle circle1;

    cout << circle1 << endl;
    cout << circle2 << endl;
    cout << circle3 << endl;
    cout << circle4 << endl;
    cout << circle5 << endl;

    if(circle1.setRadius(9).getRadius() != 9)
        return EXIT_FAILURE;

    if(circle5.setColor(c).getColor().getColorCode() != c.getColorCode())
        return EXIT_FAILURE;

    return EXIT_SUCCESS;
}
