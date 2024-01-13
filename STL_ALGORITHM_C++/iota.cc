// iota.cpp

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums(5);

    int start_value = 10;
    std::iota(nums.begin(), nums.end(), start_value);

    std::cout << "Vector after iota: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
