#include <string>

class Employee {
    public:
        Employee (std::string name, unsigned short int age, unsigned short int year_service, unsigned short int salary);
        ~Employee();

        std::string GetName()const;
        unsigned short int GetAge()const;
        unsigned short int GetYearsOfService()const;
        unsigned short int GetSalary()const;

        void SetName(std::string name);
        void SetAge (unsigned short int age);
        void SetYearsOfService (unsigned short int year_service);
        void SetSalary (unsigned short int salary);
    private:
        std::string itsName;
        unsigned short int itsAge;
        unsigned short int itsYearsOfService;
        unsigned short int itsSalary;
};