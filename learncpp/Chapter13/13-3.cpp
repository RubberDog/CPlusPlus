#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios::showpos); // turn on showpos-flag for + in front of positive numbers
    // use 'or' ->  |   to use multiple flags
    cout << 27 << endl;
    cout.unsetf(ios::showpos);
    cout << 27 << endl;
    // switch to hex - for this, first turn of dec
    cout.unsetf(ios::dec);
    cout.setf(ios::hex);
    cout << 27 << endl;

    // or: setf(ios::hex, ios::basefield);  this sets all other flags of this group off

    // third variant
    cout << hex << 27 << endl;
    cout << 28 << endl; // still hex
    cout << dec << 29 << endl;

    return 0;
}
