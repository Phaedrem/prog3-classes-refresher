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
    return 0;
}

float Sphere::getArea(){
    return 0;
}
