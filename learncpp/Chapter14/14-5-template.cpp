#include <iostream>

template<typename T>
class Storage8
{
private:
    T m_tType[8];

public:
    void Set(int nIndex, const T &tType)
    {
        m_tType[nIndex] = tType;
    }

    const T& Get(int nIndex)
    {
        return m_tType[nIndex];
    }
};

template<> // the following is a template class with no templated parameters
class Storage8<bool> // we're specializing Storage8 for bool
{
// What follows i s just standard class implementation details 
private:
    unsigned char m_tType;

public:
    void Set(int nIndex, bool tType)
    {
        // Figure out which bit we're setting/unsetting
        // This will put a 1 in the bit we're interested in turning on/off
        unsigned char nMask = 1 << nIndex;

        if (tType) // If we're setting a bit
            m_tType |= nMask; // use bitwise-or to turn that bit on
        else // if we're turning a bit off
            m_tType &= ~nMask; // bitwise-and the inverse mask to turn that bit off
    }

    bool Get(int nIndex)
    {
        // Figure out which bit we're getting
        unsigned char nMask = 1 << nIndex;
        // bitwise-and to get the value of the bit we're interested in
        // then implicit cast to boolean
        return m_tType & nMask;
    }
};

int main()
{
    // Define a Storage8 for integers (instantiates Storage8<T>, where T = int
    Storage8<int> cIntStorage;

    for(int nCount=0; nCount<8; nCount++)
        cIntStorage.Set(nCount, nCount);

    for(int nCount=0; nCount<8; nCount++)
        std::cout << cIntStorage.Get(nCount) << std::endl;

    // Define a Storage8 for vool (instantiates Storage8<bool> specialization
    Storage8<bool> cBoolStorage;
    for(int nCount=0; nCount<8; nCount++)
        cBoolStorage.Set(nCount, nCount & 3);

    for(int nCount=0; nCount<8; nCount++)
        std::cout << (cBoolStorage.Get(nCount) ? "true" : "false") << std::endl;

    return 0;
}
