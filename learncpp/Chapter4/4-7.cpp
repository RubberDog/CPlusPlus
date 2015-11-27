#include <iostream>
#include <string>

struct Employee
{
    std::string name;
    short id;
    int age;
    double wage;
};

void printInformation(Employee employee)
{
    std::cout << "Name: " << employee.name << "\n";
    std::cout << "ID:   " << employee.id << "\n";
    std::cout << "Age:  " << employee.age << "\n";
    std::cout << "Wage: " << employee.wage << "\n";
}

int main()
{
    Employee joe = {"Joe", 14, 32, 24.15};
    Employee frank = {"Frank", 15,28,18.27};

    // Print Joe's information
    printInformation(joe);

    std::cout << "\n";

    // Print Frank's information
    printInformation(frank);

    return 0;
}
