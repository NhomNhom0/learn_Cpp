#include "../include/menu.h"
#include "../include/perimeter.h"
#include "../include/divide.h"
#include "../include/power_recursive.h"
#include <iostream>

void DisplayMenu() {
    std::cout << "======Day 5 Menu======" << std::endl;
    std::cout << "1. Calculate Perimeter" << std::endl;
    std::cout << "2. Calculate Division" << std::endl;
    std::cout << "3. Calculate Power" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "======================" << std::endl;
}

void CalculatePerimeter() {
    unsigned short int length;
    unsigned short int width;

    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;

    unsigned long int perimeter = Perimeter(length, width);
    std::cout << "Perimeter of rectangle with length " << length << " and width " << width << " is " << perimeter << std::endl;
}

void CalculateDivision() {
    unsigned short int divisor;
    unsigned short int dividend;

    std::cout << "Enter divisor: ";
    std::cin >> divisor;
    std::cout << "Enter dividend: ";
    std::cin >> dividend;

    long int result = Divided(divisor, dividend);
    std::cout << "Result of dividing " << divisor << " by " << dividend << " is " << result << std::endl;
}

void CalculatePower() {
    short int base;
    unsigned short int exponent;

    std::cout << "Enter base: ";
    std::cin >> base;
    std::cout << "Enter exponent: ";
    std::cin >> exponent;

    unsigned long int power = PowerRecursive(base, exponent);
    std::cout << "Result of Power " << base << " by " << exponent << " is " << power << std::endl;
}