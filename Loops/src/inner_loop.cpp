#include "../include/inner_loop.hpp"
#include <iostream>

namespace NestedLoop
{
    void InnerLoopForward(int inner, int outer)
    {
        for (int i = inner; i <= outer; ++i)
        {
            std::cout << i << ' ';
        }
    }

    void InnerLoopBackward(int inner, int outer)
    {
        for (int i = inner; i >= outer; --i)
        {
            std::cout << i << ' ';
        }
    }

    void InnerLoopInvert(int inner, int outer, int init)
    {
        // std::cout << "InnerLoopInvert called";
        int padding = outer - inner;
        // std::cout << "padding: " << padding << '\n';
        for (int i = 1; i<= padding; ++i)
        {
            std::cout << "  ";
        }
        for (int i = outer - padding; i >= init; --i)
        {
            std::cout << i << ' ';
        }
    }
} // namespace NestedLoops
