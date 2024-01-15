// front_queue.cpp

// front() - Returns a reference to the front element of the queue.

#include <iostream>
#include <queue>

int main()
{
    std::queue<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    if (!numbers.empty())
    {
        int front_element = numbers.front();
        std::cout << "Front element: " << front_element << std::endl;
    }
    else
    {
        std::cout << "Queue is empty." << std::endl;
    }

    return 0;
}
