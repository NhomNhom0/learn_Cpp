#include "../include/for_count.hpp"
#include <iostream>

void ForCount(unsigned int start, unsigned int end, unsigned int step) {
    for (unsigned int i = start; i <= end; i = i+ step) {
        std::cout << i << std::endl;
    }
}