/*********************
Name: Darren Bowers
Coding 02
Purpose: Classes and Objects refresher assignment
**********************/

#include "sphere.h"

Sphere::Sphere(){
    setRadius(MIN);
}

Sphere::Sphere(float r){
    setRadius(r);
}

Sphere::~Sphere(){
}

float Sphere::getVolume(){
    float volume = ((4.0/3.0)*M_PI*pow(radius,3));
    return volume;
}

float Sphere::getArea(){
    float area = (4.0*M_PI*pow(radius,2));
    return area;
}
