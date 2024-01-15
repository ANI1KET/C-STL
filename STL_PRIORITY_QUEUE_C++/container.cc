// container_priority_queue.cpp

// container(): Returns a copy of the underlying container used for the priority queue.

#include <iostream>
#include <queue>
#include <vector>

int main()
{
    std::priority_queue<int> pq;

    pq.push(5);
    pq.push(10);
    pq.push(3);

    std::priority_queue<int> copy_pq = pq; // Create a copy of the priority queue

    std::cout << "Elements in the container: ";
    while (!copy_pq.empty())
    {
        std::cout << copy_pq.top() << " ";
        copy_pq.pop();
    }
    std::cout << std::endl;

    return 0;
}