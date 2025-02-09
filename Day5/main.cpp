#include "./include/perimeter.h"
#include "./include/divide.h"
#include "./include/power_recursive.h"
#include <iostream>

int main() {
    unsigned short int length = 6;
    unsigned short int width = 4;
    unsigned long int perimeter = Perimeter(length, width);

    std::cout << "Perimeter of rectangle with length " << length << " and width " << width << " is " << perimeter << std::endl;

    unsigned short int divisor;
    unsigned short int dividend;
    
    std::cout << "Enter divisor: ";
    std::cin >> divisor;
    std::cout << "Enter dividend: ";
    std::cin >> dividend;

    long int result = Divided(divisor, dividend);
    std::cout << "Result of dividing " << divisor << " by " << dividend << " is " << result << std::endl;

    short int base;
    unsigned short int exponent;

    std::cout << "Enter base: ";
    std::cin >> base;
    std:: cout << "Enter exponent: ";
    std::cin >> exponent;

    unsigned long int power = PowerRecursive(base, exponent);
    std::cout << "Result of Power " << base << " by " << exponent << " is " << power << std::endl;

    return 0;
}