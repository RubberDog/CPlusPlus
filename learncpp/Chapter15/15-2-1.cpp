// throw-examples
throw -1; // throw a literal integer value
throw ENUM_INVALID_INDEX; // throw an enum value
throw "Can not take square root of negative number"; // throw a literal char* string
throw dX; // throw a double variable that was previously defined
throw MyException("Fatal Error"); // throw an object of class MyException


// try-example
try
{
    // Statements that may throw exceptions you want to handle now go here
    throw -1;
}

// catch-example
catch(int)
{
    // Handle an exception of type int here
    cerr << "We caught an exception of type int" << endl;
}

// try-catch block
int main()
{
    try
    {
        // Statements that may throw exceptions you want to handle now go here
        throw -1;
    }
    catch(int)
    {
        // Any exceptions of type double thrown within the above try block get sent here
        cerr << "We caught an exception of type int" << endl;
    }
    catch(double)
    {
        // Any exceptions of type double thrown withn the aboce try block get sent here
        cerr << "We caught an exception of type double" << endl;
    }

    return 0;
}
