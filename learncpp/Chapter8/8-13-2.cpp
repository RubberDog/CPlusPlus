class Value
{
    private:
        int m_nValue;
    public:
        Value(int nValue) { m_nValue = nValue; }
        friend bool IsEqual(const Value &cValue1, const Value &cValue2);
};

bool IsEqual(const Value &cValue1, const Value &cValue2)
{
    return(cValue1.m_nValue == cValue.m_nValue2);
}
