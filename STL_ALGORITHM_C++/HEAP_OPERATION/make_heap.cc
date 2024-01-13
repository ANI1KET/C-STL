// make_heap.cpp

// Description: Creates a max heap from a range of elements.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    std::make_heap(nums.begin(), nums.end());

    std::cout << "Vector after make_heap: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
