// reverse.cpp

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5};

    std::reverse(nums.begin(), nums.end());

    std::cout << "Vector after reverse: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
