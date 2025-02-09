#include "./include/menu.h"
#include <iostream>

int main() {
    int choice;
    
    while(choice != 4){
        DisplayMenu();
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                CalculatePerimeter();
                break;
            case 2:
                CalculateDivision();
                break;
            case 3:
                CalculatePower();
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
                break;
        }
    std::cout << "\n" "\n" "\n" "\n" "\n" "\n" <<std::endl;
    };
    return 0;
}