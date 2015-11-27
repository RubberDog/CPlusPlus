#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int age;
    int letters;

    cout << "Please enter your full name: " << endl;
    getline(cin, name);
    cout << "Please enter your age: " << endl;
    cin >> age;
    
    letters = name.length();
    cout << "You've lived " << static_cast<double>(age)/letters << " years for each letter in your name." << endl;

    return 0;
}
