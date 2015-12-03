#include <iostream>
#include <cstring>

class Employee
{
public:
    char m_strName[25];
    int m_nID;
    double m_dWage;

    // set the employee information
    void setInfo(const char *strName, int nID, double dWage)
    {
        strncpy(m_strName, strName, 25);
        m_nID = nID;
        m_dWage = dWage;
    }

    // print employee information to the screen
    void print()
    {
        using namespace std;
        cout << "Name: " << m_strName << "  Id: " << m_nID << "  Wage: $" << m_dWage << endl;
    }
};

int main()
{
    // Declare two employees
    Employee cAlex;
    cAlex.setInfo("Alex", 1, 25.00);

    Employee cJoe;
    cJoe.setInfo("Joe", 2, 22.25);


    cAlex.print();
    cJoe.print();

    return 0;
}
