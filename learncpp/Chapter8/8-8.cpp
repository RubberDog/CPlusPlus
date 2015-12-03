class Book
{
private:
    int m_nPages;

    // This constructor can only be used by Book's members
    Book()  // private default contructor
    {
        m_nPages = 0;
    }

public:
    // This constructor can be used by anybody
    Body(int nPages) // public non-default constructor
    {
        m_nPages = nPages;
    }
};

int main()
{
    Book cMyBook; // Fails because default constructor Book() is private
    Book cMyOtherBook(242); // okay because Book(int) is public

    return 0;
}
