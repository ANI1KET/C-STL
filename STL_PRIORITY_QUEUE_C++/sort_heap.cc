// sort_heap_priority_queue.cpp

// sort_heap(begin, end): Sorts a max heap into a sorted range.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> vec = {10, 5, 15, 20, 8};

    // Convert vector into a max heap
    std::make_heap(vec.begin(), vec.end());

    std::sort_heap(vec.begin(), vec.end()); // Sort the heap into a sorted range

    std::cout << "Sorted heap elements: ";
    for (int num : vec)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
