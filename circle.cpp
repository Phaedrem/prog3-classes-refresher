/*********************
Name: Darren Bowers
Coding 02
Purpose: Classes and Objects refresher assignment
**********************/

#include "circle.h"

Circle::Circle(){
    setRadius(MIN);
}

Circle::Circle(float r){
    setRadius(r);   
}

Circle::~Circle(){
}

float Circle::getRadius(){
    return 0;
}

float Circle::getCircumference(){
    return 0;
}

float Circle::getArea(){
    return 0;
}

float Circle::getDiameter(){
    return 0;
}

void Circle::setRadius(float r){
    radius = r;
}