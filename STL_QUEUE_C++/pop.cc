// pop_queue.cpp

// pop() - Removes the front element from the queue.

#include <iostream>
#include <queue>

int main()
{
    std::queue<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    std::cout << "Queue before pop: ";
    while (!numbers.empty())
    {
        std::cout << numbers.front() << " ";
        numbers.pop();
    }
    std::cout << std::endl;

    std::cout << "Queue after pop: ";
    if (numbers.empty())
    {
        std::cout << "Queue is empty.";
    }
    else
    {
        std::cout << "Front element: " << numbers.front();
    }
    std::cout << std::endl;

    return 0;
}
