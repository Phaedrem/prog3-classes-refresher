/*********************
Name: Darren Bowers
Coding 02
Purpose: Classes and Objects refresher assignment
**********************/

#include "functions.h"

void displayCircle(Circle *myCircle){
    std::cout << myCircle->getRadius() << std::endl;
    std::cout << myCircle->getDiameter() << std::endl;
    std::cout << myCircle->getCircumference() << std::endl;
    std::cout << myCircle->getArea() << std::endl;
    std::cout << std::endl;
}

void displaySphere(Sphere *mySphere){
    std::cout << mySphere->getRadius() << std::endl;
    std::cout << mySphere->getDiameter() << std::endl;
    std::cout << mySphere->getCircumference() << std::endl;
    std::cout << mySphere->getArea() << std::endl;
    std::cout << mySphere->getVolume() << std::endl;
    std::cout << std::endl;
}