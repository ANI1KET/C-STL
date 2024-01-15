// size_priority_queue.cpp

// size(): Returns the number of elements in the priority queue.

#include <iostream>
#include <queue>

int main()
{
    std::priority_queue<int> pq;

    pq.push(5);
    pq.push(10);
    pq.push(3);

    std::cout << "Number of elements in the priority queue: " << pq.size() << std::endl;

    return 0;
}
