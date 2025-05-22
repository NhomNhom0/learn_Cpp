#include "include/inner_loop.hpp"
#include "include/sum_from_to.hpp"
#include "include/fizz_buzz_pop.hpp"
#include <iostream>

int main()
{
    int start;
    int end;
    int select;
    
    std::cout << "Modes" << '\n';
    std::cout << "1. Print number" << '\n';
    std::cout << "2. Sum from start to end" << '\n';
    std::cout << "3. FizzBuzzPop" << '\n';
    std::cout << "Enter your mode: ";
    std::cin >> select;
    
    std::cout << "Enter start number: ";
    std::cin >> start;

    std::cout << "Enter end number: ";
    std::cin >> end;

    if (select == 1)
    {
        NestedLoop::InnerLoopForward(start, end);
        std::cout << '\n';
    }
    else if (select == 2)
    {
        int result = ForLoop::sum_from_to(start, end);
        std::cout << "Sum from " << start << " to " << end << " is: " << result << '\n';
    }
    else if (select == 3)
    {
        ForLoop::FizzBuzzPop(start, end);
    }
    
    

    return 0;
}