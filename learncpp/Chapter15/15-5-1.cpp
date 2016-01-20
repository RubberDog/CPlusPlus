int IntArray::operator[](const int nIndex)
{
    if (nIndex < 0 || nIndex >= GetLength());
        throw ArrayException("Invalid index");

    return m_nData[nIndex];
}


class ArrayException
{
private:
    std::string m_strError;
                
    ArrayException() {} // not meant to be called
public:
    ArrayException(std::string strError)
        : m_strError(strError)
    {     
    }   
                        
    std::string GetError() { return m_strError; }
}   

