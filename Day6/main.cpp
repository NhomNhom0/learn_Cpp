#include "./include/employee.hpp"
#include <iostream>
#include <string>
#include <cmath>

int main() {
    Employee Dick ("Dick", 27, 5, 2306);

    unsigned short int salary_before = std::round(Dick.GetSalary() / 1000) * 1000;

    std::cout << "The Employee name: " << Dick.GetName() << std::endl;
    std::cout << "The Employee age: " << Dick.GetAge() << " years old" << std::endl;
    std::cout << "The Employee year of service: " << Dick.GetYearsOfService() << " years" <<std::endl;
    std::cout << "The Employee salary before update: " << salary_before << "$"<< std::endl;

    Dick.SetSalary(4650);

    unsigned short int salary_after = std::round(Dick.GetSalary() / 1000) * 1000;
    std::cout << "The Employee salary after update: " << salary_after << "$"<< std::endl;

    return 0;
}