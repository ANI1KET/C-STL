// push_heap_priority_queue.cpp

// push_heap(begin, end): Adds an element to a max heap.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> vec = {10, 5, 15, 20, 8};

    // Convert vector into a max heap
    std::make_heap(vec.begin(), vec.end());

    vec.push_back(25);                      // Add a new element
    std::push_heap(vec.begin(), vec.end()); // Push the new element into the heap

    std::cout << "Max heap elements after push: ";
    for (int num : vec)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
