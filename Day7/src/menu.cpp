#include "../include/menu.hpp"
#include "../include/nested_for_loop.hpp"
#include "../include/for_count.hpp"
#include "../include/while_count.hpp"
#include "../include/do_while_count.hpp"
#include <iostream>

int DisPlayMenu() {
    int choice;

    std::cout << "======Day7 Menu======" << std::endl;
    std::cout << "1. Nested For Loop" << std::endl;
    std::cout << "2. For Count" << std::endl;
    std::cout << "3. While Count" << std::endl;
    std::cout << "4. Do...While Count" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Enter choice: ";
    std::cin >> choice;

    return choice;
}

void PrintNestedForLoop() {
    unsigned int row, column;
    char character;
    std::cout << "Enter row: ";
    std::cin >> row;
    std::cout << "Enter column: ";
    std::cin >> column;
    std::cout << "Enter character: ";
    std::cin >> character;
    NestedForLoop(row, column, character);
}

void PrintForCount() {
    unsigned int start, end, step;

    std::cout << "Enter start number: ";
    std::cin >> start;
    std::cout << "Enter end number: ";
    std::cin >> end;
    std::cout << "Enter step: ";
    std::cin >> step;
    ForCount(start, end, step);
}

void PrintWhileCount() {
    unsigned int start, end, step;

    std::cout << "Enter start number: ";
    std::cin >> start;
    std::cout << "Enter end number: ";
    std::cin >> end;
    std::cout << "Enter step: ";
    std::cin >> step;
    WhileCount(start, end, step);
}

void PrintDoWhileCount() {
    unsigned int start, end, step;

    std::cout << "Enter start number: ";
    std::cin >> start;
    std::cout << "Enter end number: ";
    std::cin >> end;
    std::cout << "Enter step: ";
    std::cin >> step;
    DoWhileCount(start, end, step);
}