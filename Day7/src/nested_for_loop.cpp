#include "../include/nested_for_loop.hpp"
#include <iostream>

void NestedForLoop(unsigned int row, unsigned int column, char character) {
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++) {
            std::cout << character;
        }
        std::cout << std::endl;
    }
}