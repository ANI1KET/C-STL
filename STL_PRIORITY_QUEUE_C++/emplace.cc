// emplace_priority_queue.cpp

// emplace(args...): Constructs and inserts an element into the priority queue.

#include <iostream>
#include <queue>

struct MyStruct
{
    int value;
    MyStruct(int val) : value(val) {}
};

int main()
{
    std::priority_queue<MyStruct> pq;

    pq.emplace(5);
    pq.emplace(10);
    pq.emplace(3);

    std::cout << "Top element: " << pq.top().value << std::endl;

    return 0;
}
