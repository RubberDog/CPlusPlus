// Example to understand forward declaration

#include <iostream>

using namespace std;

int add(int x, int y);

int main()
{
    cout << "The sum of 3 and 4 is: " << add(3, 4) << endl;

    return 0;
}

int add(int x, int y)
{
    return x + y;
}
