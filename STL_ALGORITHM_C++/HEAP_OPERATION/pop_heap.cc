// pop_heap.cpp

// Description: Removes the maximum element from a max heap and maintains the heap property.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Make heap
    std::make_heap(nums.begin(), nums.end());

    // Pop the largest element
    std::pop_heap(nums.begin(), nums.end());
    nums.pop_back();

    std::cout << "Vector after pop_heap: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
