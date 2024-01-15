// is_heap_until_priority_queue.cpp

// is_heap_until(begin, end): Finds the first element that breaks the heap property.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> vec = {20, 15, 10, 8, 5};

    // Convert vector into a max heap
    std::make_heap(vec.begin(), vec.end());

    auto firstNonHeapElement = std::is_heap_until(vec.begin(), vec.end());

    std::cout << "First element that breaks heap property: " << *firstNonHeapElement << std::endl;

    return 0;
}
