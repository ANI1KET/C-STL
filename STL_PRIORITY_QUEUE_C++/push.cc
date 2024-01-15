// push_priority_queue.cpp

// push(value): Inserts the given value into the priority queue.

#include <iostream>
#include <queue>

int main()
{
    std::priority_queue<int> pq;

    pq.push(5);
    pq.push(10);
    pq.push(3);

    std::cout << "Priority queue size after push: " << pq.size() << std::endl;

    return 0;
}
