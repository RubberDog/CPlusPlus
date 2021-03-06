#include <iostream>

class Date
{
private:
    int m_nMonth;
    int m_nDay;
    int m_nYear;

    Date() { } // private default constructor

public:
    Date(int nMonth, int nDay, int nYear)
    {
        SetDate(nMonth, nDay, nYear);
    }

    void SetDate(int nMonth, int nDay, int nYear)
    {
        m_nMonth = nMonth;
        m_nDay = nDay;
        m_nYear = nYear;
    }

    int GetMonth() const { return m_nMonth; }
    int GetDay() const { return m_nDay; }
    int GetYear() const { return m_nYear; }
};

void PrintDate(const Date &cDate)
{
    // although cDate is const, we can call const member functions
    std::cout << cDate.GetMonth() << "/" <<
        cDate.GetDay() << "/" <<
        cDate.GetYear() << std::endl;
}

int main()
{
    const Date cDate(10, 16, 2020);
    PrintDate(cDate);

    return 0;
}
