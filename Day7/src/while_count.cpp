#include "../include/while_count.hpp"
#include <iostream>

void WhileCount(unsigned int start, unsigned int end, unsigned int step){
    unsigned int i = start;

    while (i < end) {
        std::cout << i << std::endl;
        i = i + step;
    }
}