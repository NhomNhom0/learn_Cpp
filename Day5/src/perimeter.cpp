/*
    Write the definition of the function Perimeter() as described in Exercise 1. The
    two parameters represent the length and width of a rectangle. Have the function
    return the perimeter (twice the length plus twice the width).
*/

#include "../include/perimeter.h"

unsigned long int Perimeter(unsigned short int lenght, unsigned short int width){
    return 2 * (lenght + width);
}
