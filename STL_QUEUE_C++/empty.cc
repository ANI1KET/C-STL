// empty_queue.cpp

// empty() - Returns true if the queue is empty, false otherwise.

#include <iostream>
#include <queue>

int main()
{
    std::queue<int> numbers;

    if (numbers.empty())
    {
        std::cout << "Queue is empty." << std::endl;
    }
    else
    {
        std::cout << "Queue is not empty." << std::endl;
    }

    return 0;
}
