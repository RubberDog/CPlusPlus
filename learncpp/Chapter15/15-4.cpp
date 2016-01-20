#include <iostream>
#include "math.h"

using namespace std;

double MySqrt(double dX)
{
    if (dX < 0.0)
        throw "Can not take sqrt of negative number";

    return sqrt(dX);
}

int main()
{
    cout << "Enter a number: ";
    double dX;
    cin >> dX;

    try
    {
        cout << "The sqrt of " << dX << " is " << MySqrt(dX) << endl;
    }
    catch(...)
    {
        cerr << "Something went horribly wrong here!" << endl;
        return 1;
    }

    return 0;
}


