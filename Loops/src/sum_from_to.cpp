#include "../include/sum_from_to.hpp"

namespace ForLoop
{
    int sum_from_to(int start, int end)
    {
        int sum = 0;
        for (int i = start; i <= end; ++i)
        {
            sum += i;
        }
        return sum;
    }
}