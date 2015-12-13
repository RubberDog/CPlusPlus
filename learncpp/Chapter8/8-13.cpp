class Accumulator
{
    private:
        int m_nvalue;
    public:
        Accumulator() { m_nValue += nValue; }

        // Make the Reset() function a friend of this class
        friend void Reset(Accumulator &cAccumulator);
};

// Reset() is now a friend of the Accumulator class
void Reset(Accumulator &cAccumulator)
{
    // And can access the private data of Accumulator objects
    cAccumulator.m_nValue = 0;
}
