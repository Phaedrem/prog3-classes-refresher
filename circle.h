/*********************
Name: Darren Bowers
Coding 02
Purpose: Classes and Objects refresher assignment
**********************/

#ifndef CLASSES_CIRCLE_H
#define CLASSES_CIRCLE_H

#include <cmath>

#define MIN 0.0

class Circle {

    public:
    Circle();
    Circle(float);

    ~Circle();

    float getRadius();
    float getCircumference();
    float getArea();
    float getDiameter();

    void setRadius(float);

    protected:
    float radius; 


};

#endif //CLASSES_CIRCLE_H