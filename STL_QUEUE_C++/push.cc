// push_queue.cpp

// push(value) - Pushes an element onto the back of the queue.

#include <iostream>
#include <queue>

int main()
{
    std::queue<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    std::cout << "Queue after push: ";
    while (!numbers.empty())
    {
        std::cout << numbers.front() << " ";
        numbers.pop();
    }
    std::cout << std::endl;

    return 0;
}
