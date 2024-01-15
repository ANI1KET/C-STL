// pop_priority_queue.cpp

// pop(): Removes the top element (highest priority) from the priority queue.

#include <iostream>
#include <queue>

int main()
{
    std::priority_queue<int> pq;

    pq.push(5);
    pq.push(10);
    pq.push(3);

    std::cout << "Top element before pop: " << pq.top() << std::endl;

    pq.pop(); // Remove the top element

    std::cout << "Top element after pop: " << pq.top() << std::endl;

    return 0;
}
