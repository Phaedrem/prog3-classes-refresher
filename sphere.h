/*********************
Name: Darren Bowers
Coding 02
Purpose: Classes and Objects refresher assignment
**********************/

#ifndef CLASSES_SPHERE_H
#define CLASSES_SPHERE_H

#include "circle.h"

class Sphere : public Circle {

    public:
    Sphere();
    Sphere(float); 

    ~Sphere();

    float getVolume();
    float getArea();

};

#endif //CLASSES_SPHERE_H