#include "../include/fizz_buzz_pop.hpp"
#include <iostream>

namespace ForLoop
{
    void FizzBuzzPop(int start, int end)
    {
        for (int i = start; i <= end; ++i)
        {
            bool check = false;
            if (i % 3 == 0)
            {
                check = true;
                std::cout << "fizz ";
            }
            if (i % 5 == 0)
            {
                check = true;
                std::cout << "buzz ";
            }
            if (i % 7 == 0)
            {
                check = true;
                std::cout << "pop";
            }
            if (!check)
            {
                std::cout << i;
            }
            std::cout << '\n';
        }
    }
} // namespace ForLoop
