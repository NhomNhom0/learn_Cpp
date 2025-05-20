#include "./include/swap.hpp"
#include "./include/max.hpp"
#include <iostream>
#include <tuple>

int main()
{
    int smaller;
    int larger;
    int max;
    
    std::cout << "Enter an integer: ";
    std::cin >> smaller;
    std::cout << "Enter larger integer: ";
    std::cin >> larger;

    max = Quizz1::max(smaller, larger);
    if (max == smaller)
    {
        std::cout << "Swapping the values \n";
        std::pair<int, int> swapped = Quizz1::swap(smaller, larger);
        std::cout << "The smaller value is: " << std::get<0>(swapped) << "\n";
        std::cout << "The larger value is: " << std::get<1>(swapped) << "\n";
    }
    else
    {
        std::cout << "The smaller value is: " << smaller << "\n";
        std::cout << "The larger value is: " << larger << "\n";
    }

    return 0;
}