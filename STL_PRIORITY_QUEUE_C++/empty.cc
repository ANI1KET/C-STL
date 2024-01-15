// empty_priority_queue.cpp

// empty(): Checks if the priority queue is empty.

#include <iostream>
#include <queue>

int main()
{
    std::priority_queue<int> pq;

    if (pq.empty())
    {
        std::cout << "Priority queue is empty." << std::endl;
    }
    else
    {
        std::cout << "Priority queue is not empty." << std::endl;
    }

    return 0;
}
