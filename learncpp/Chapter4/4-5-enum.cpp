#include <iostream>

using namespace std;

int main()
{
    enum Color
    {
        RED, // RED is placed in the same scope as Color
        BLUE
    };

    enum Fruit
    {
        BANANA, // BANANA is placed in the same scope as Fruit
        APPLE
    };

    Color color = RED; // Color and RED can be accessed in the same scope (no prefix needed)
    Fruit fruit = BANANA; // Fruit and BANANA can be accessed in the same scope (no prefix needed)

    if(color == fruit) // The compiler will compare a and b as integers
        cout << "color and fruit are equal\n"; // and find they are equal!
    else
        cout << "color and fruit are not equal\n";

    return 0;
}
