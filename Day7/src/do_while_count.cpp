#include "../include/do_while_count.hpp"
#include <iostream>

void DoWhileCount(unsigned int start, unsigned int end, unsigned int step) {
    unsigned int i = start;
    do {
        std::cout << i << std::endl;
        i += step;
    } while (i < end);
    std::cout << std::endl;
}