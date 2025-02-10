#include "../include/employee.hpp"
#include <string>

Employee::Employee(std::string name, unsigned short int age, unsigned short int year_service, unsigned short int salary){
    itsName = name;
    itsAge = age;
    itsYearsOfService = year_service;
    itsSalary = salary;
}
Employee::~Employee(){}

std::string Employee::GetName() const {
    return itsName;
}

unsigned short int Employee::GetAge() const {
    return itsAge;
}

unsigned short int Employee::GetYearsOfService() const {
    return itsYearsOfService;
}

unsigned short int Employee::GetSalary() const {
    return itsSalary;
}

void Employee::SetName(std::string name) {
    itsName = name;
}

void Employee::SetAge(unsigned short int age){
    itsAge = age;
}

void Employee::SetYearsOfService(unsigned short int year_service){
    itsYearsOfService = year_service;
}

void Employee::SetSalary(unsigned short int salary) {
    itsSalary = salary;
}