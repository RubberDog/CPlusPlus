#include <iostream>
using namespace std;

class Base
{
protected:
    int m_nValue;

public:
    Base(int nValue)
        : m_nValue(nValue)
    {
    }

    void Identify() { cout << "I am a Base" << endl; }
};

class Derived: public Base
{
public:
    Derived(int nValue)
        :Base(nValue)
    {
    }

    int GetValue() { return m_nValue; }
    
    void Identify() { 
        Base::Identify();
        cout << "I am a Derived" << endl; 
    }
};


int main()
{
    Base cBase(5);
    cBase.Identify();

    Derived cDerived(5);
    cDerived.Identify();
    cout << "cDerived has value " << cDerived.GetValue() << endl;

    return 0;
}
