#include <vector>
#include <iostream>

void printStack(const std::vector<int> &stack)
{
    for(const auto &element : stack)
        std::cout << element << ' ';
    std::cout << "(cap " << stack.capacity() << " size " << stack.size() << ")\n";
}

int main()
{
    std::vector<int> stack;

    stack.reserve(5);

    printStack(stack);

    stack.push_back(5);
    printStack(stack);

    stack.push_back(3);
    printStack(stack);

    stack.push_back(2);
    printStack(stack);

    std::cout << "top: " << stack.back() << '\n';

    stack.pop_back();
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    return 0;
}
