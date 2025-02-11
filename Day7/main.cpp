#include "./include/menu.hpp"
#include <iostream>

int main() {
    bool exit = false;

    while (true) {
        int choice = DisPlayMenu();
        switch(choice) {
            case 1:
                PrintNestedForLoop();
                break;
            case 2:
                PrintForCount();
                break;
            case 3:
                PrintWhileCount();
                break;
            case 4:
                PrintDoWhileCount();
                break;
            case 5:
                exit = true;
                break;
            default:
                std::cout << "Invalid choice, select agian !" << std::endl;
                break;
        }

        if (exit == true) {
            break;
        }
    }
}