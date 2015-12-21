#include <iostream>
#include <string>

using namespace std;

int main()
{
    char strBuf[11];
    // read up to 10 characters
    cin.getline(strBuf, 11);
    cout << strBuf << endl;

    // read up to 10 more characters
    cin.getline(strBuf, 11);
    cout << strBuf << endl;
    cout << cin.gcount() << " characters were read" << endl;

    return 0;
}
