// nth_element.cpp

// Description: Partially sorts a range, moving the nth element to its correct position.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    std::nth_element(nums.begin(), nums.begin() + 3, nums.end());
    std::cout << "After nth_element: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
