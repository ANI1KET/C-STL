// size_queue.cpp

// size() - Returns the number of elements in the queue.

#include <iostream>
#include <queue>

int main()
{
    std::queue<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    std::cout << "Size of queue: " << numbers.size() << std::endl;

    return 0;
}
