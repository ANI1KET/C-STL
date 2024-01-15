// top_priority_queue.cpp

// top(): Returns a reference to the top element (highest priority) in the priority queue.

#include <iostream>
#include <queue>

int main()
{
    std::priority_queue<int> pq;

    pq.push(5);
    pq.push(10);
    pq.push(3);

    int topElement = pq.top(); // Get the top element

    std::cout << "Top element: " << topElement << std::endl;

    return 0;
}
