#include <iostream>
#include <cstring>

template <typename T, int nSize> // nSize is the expression parameter

class Buffer
{
private:
    // The expression parameter controls the side of the array
    T m_atBuffer[nSize];

public:
    T* GetBuffer() { return m_atBuffer; }

    T& operator[](int nIndex)
    {
        return m_atBuffer[nIndex];
    }
};

template <typename T, int nSize>
void PrintBufferString(Buffer<T, nSize> &rcBuf)
{
    std::cout << rcBuf.GetBuffer() << std::endl;
}

int main()
{
    // declare a char buffer
    Buffer<char, 10> cChar10Buffer;

    // copy a value into the buffer
    strcpy(cChar10Buffer.GetBuffer(), "Ten");

    // Print the value
    PrintBufferString(cChar10Buffer);

    return 0;
}


