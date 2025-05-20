#include "../include/swap.hpp"
#include <tuple>

namespace Quizz1
{
    std::pair<int, int> swap(int smaller, int larger)
    {
        if (smaller > larger)
        {
            return {larger, smaller};
        }
        else
        {
            return {smaller, larger};
        }
    }
}