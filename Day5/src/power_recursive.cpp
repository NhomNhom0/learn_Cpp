/*
    Write a program that asks for a number and a power. Write a recursive function
    that takes the number to the power. Thus, if the number is 2 and the power is 4, the
    function will return 16.
*/


#include "../include/power_recursive.h"

unsigned long int PowerRecursive(short int base, unsigned short int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * PowerRecursive(base, exponent - 1);
    }
}