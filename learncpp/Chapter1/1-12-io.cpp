#include <iostream>

using namespace std;

int readNumber()
{
    cout << "Please enter an integer: " << endl;
    int x;
    cin >> x;
    return x;
}

int writeAnswer(int x, int y)
{
    return x + y;   
}

