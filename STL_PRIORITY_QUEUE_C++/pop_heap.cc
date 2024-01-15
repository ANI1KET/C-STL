// pop_heap_priority_queue.cpp

// pop_heap(begin, end): Removes the largest element from a max heap.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> vec = {10, 5, 15, 20, 8};

    // Convert vector into a max heap
    std::make_heap(vec.begin(), vec.end());

    std::pop_heap(vec.begin(), vec.end()); // Move the largest element to the end
    vec.pop_back();                        // Remove the largest element

    std::cout << "Max heap elements after pop: ";
    for (int num : vec)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
