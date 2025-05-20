#include "../include/max.hpp"
#include <tuple>

namespace Quizz1
{
    int max(int x, int y)
    {
        if (x > y)
        {
            return x;
        }
        else
        {
            return y;
        }
    }
}