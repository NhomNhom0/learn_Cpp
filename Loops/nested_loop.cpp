#include "include/inner_loop.hpp"
#include <iostream>

int main()
{
    int start;
    int end;
    char direction;

    std::cout << "Enter start number: ";
    std::cin >> start;

    std::cout << "Enter end number: ";
    std::cin >> end;

    std::cout << "Enter direction: ";
    std::cin >> direction;

    if (direction == 'f')
    {
        for (int i = start; i <= end; ++i)
        {
            NestedLoop::InnerLoopForward(start, i);
            std::cout << '\n';
        }
    }
    else if (direction == 'b')
    {
        for (int i = end; i >= start; --i)
        {
            NestedLoop::InnerLoopBackward(i, start);
            std::cout << '\n';
        }
    }
    else if (direction == 'i')
    {
        for (int i = start; i <= end; ++i)
        {
            NestedLoop::InnerLoopInvert(i, end, start);
            std::cout << '\n';
        }
    }

    return 0;
}