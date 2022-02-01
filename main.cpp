/*********************
Name: Darren Bowers
Coding 02
Purpose: Classes and Objects refresher assignment
**********************/

#include "main.h"

int main(int argc, char** argv){
    cout << "Circles with Radius 0, 3, -1, .5" << endl << endl;

    Circle myCricle1;

    Circle myCircle2(3);

    Circle myCircle3(-1);

    Circle myCircle4(.5);

    displayCircle(&myCricle1);
    displayCircle(&myCircle2);
    displayCircle(&myCircle3);
    displayCircle(&myCircle4);

    cout << "Spheres with Radius 0, 3, -1, .5" << endl << endl;

    Sphere mySphere1;

    Sphere mySphere2(3);

    Sphere mySphere3(-1);

    Sphere mySphere4(.5);

    displaySphere(&mySphere1);
    displaySphere(&mySphere2);
    displaySphere(&mySphere3);
    displaySphere(&mySphere4);

    return 0;

}