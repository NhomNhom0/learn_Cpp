/*
 * Write a program that asks the user to enter two integers,
 * one named smaller, the other named larger.
 * 
 * If the user enters a smaller value for the second integer,
 * use a block and a temporary variable to swap the smaller and larger values.
 * 
 * Then print the values of the smaller and larger variables.
 * 
 * Add comments to your code indicating where each variable dies.
 * 
 * Note: When you print the values, smaller should hold the smaller input
 * and larger the larger input, no matter which order they were entered in.
 */

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
        smaller = std::get<0>(swapped);
        larger = std::get<1>(swapped);
    }
    std::cout << "The smaller value is: " << smaller << "\n";
    std::cout << "The larger value is: " << larger << "\n";

    return 0;
}