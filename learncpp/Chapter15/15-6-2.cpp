// same as before, this time with dynamically allocated memory - first fail, second win, third maybe even better

try
{
    Person *pJohn = new Person("John", 18, E_MALE);
    ProcessPerson(pJohn);
    delete pJohn;
}
catch (PersonException &cException)
{
    cerr << "Failed to process person: " << cException.what() << endl;
}


// Better version - declare pJohn outside the try-catch block, so it won't be out of scope when the try block exits

Person *pJohn = NULL;
try
{
    pJohn = new Person("John", 18, E_MALE);
    ProcessPerson(pJohn);
    delete pJohn;
}
catch (PersonException &cException)
{
    delete pJohn;
    cerr << "Failed to process person: " << cException.what() << endl;
}


// awesome version - use unique_ptr from std-library to self-cleanup

#include <memory>  // for std::unique_ptr
try
{
    pJohn = new Person("John", 18, E_MALE);
    unique_ptr<Person> pxJohn(pJohn);   // pxJohn now owns pJohn

    ProcessPerson(pJohn);

    // when pxJohn goes out of scope, it will delete pJohn
}
catch (PersonException &cException)
{
    cerr << "Failed to process person: " << cException.what() << endl;
}
