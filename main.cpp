/*********************
Name: Darren Bowers
Coding 02
Purpose: Classes and Objects refresher assignment
**********************/

#include "main.h"

int main(int argc, char** argv){
    Circle myCricle1;

    Circle myCircle2(3);

    Circle myCircle3(-1);

    Circle myCircle4(.5);

    displayCircle(&myCricle1);
    displayCircle(&myCircle2);
    displayCircle(&myCircle3);
    displayCircle(&myCircle4);

    return 0;

}