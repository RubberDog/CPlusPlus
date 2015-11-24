#include <iostream>
#include "1-12-io.h"

using namespace std;

int main()
{
    int x = readNumber();
    int y = readNumber();
    int z = writeAnswer(x, y);
    cout << x << " + " << y << " = " << z << endl;

    return 0;
}
