/*
    Write a function that takes two unsigned short integer arguments and returns the
    result of dividing the first by the second. Do not do the division if the second number is zero, but do return –1.
*/

#include "../include/divide.h"

long int Divided(unsigned short int a,unsigned short int b) {
    if (b == 0) {
        return -1;
    }
    return a / b;
}
