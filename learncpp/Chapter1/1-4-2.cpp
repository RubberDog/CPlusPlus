#include <iostream>

using namespace std;

int getValueFromUser()
{
    cout << "Enter an integer: ";
    int a;
    cin >> a;
    return a;
}

int main()
{
    int x = getValueFromUser();
    int y = getValueFromUser();

    cout << x << " + " << y << " = " << x+y << endl;

    return 0;
}
