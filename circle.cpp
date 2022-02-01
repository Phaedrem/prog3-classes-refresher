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
    return radius;
}

float Circle::getCircumference(){
    float circumference = (2.0*M_PI*radius);
    return circumference;
}

float Circle::getArea(){
    float area = (M_PI*pow(radius,2));
    return area;
}

float Circle::getDiameter(){
    float diameter = (2.0*radius);
    return diameter;
}

void Circle::setRadius(float r){
    if(r > MIN){
        radius = r;
    } else {
        radius = MIN;
    }
    
}