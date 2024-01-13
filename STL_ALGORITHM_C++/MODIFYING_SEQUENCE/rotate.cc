// rotate.cpp

// Description: Rotates the elements in a range by a specified distance.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5};

    std::rotate(nums.begin(), nums.begin() + 2, nums.end());

    std::cout << "Vector after rotate: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
