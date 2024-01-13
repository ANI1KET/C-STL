// fill.cpp

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums(5);

    std::fill(nums.begin(), nums.end(), 42);

    std::cout << "Vector after fill: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
