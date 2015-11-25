#include <iostream>

using namespace std;

int main()
{   
    int x = 7;
    int y = 4;
        
    cout << "int / int = " << x / y << "\n";
    cout << "double / int = " << static_cast<double>(x) / y << "\n";
    cout << "int / double = " << x / static_cast<double>(y) << "\n";
    cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << "\n";
    return 0;
}
