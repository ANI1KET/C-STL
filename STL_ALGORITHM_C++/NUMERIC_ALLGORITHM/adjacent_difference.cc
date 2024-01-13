// adjacent_difference.cpp

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 4, 8, 16};
    std::vector<int> adjacent_difference_result(nums.size());

    std::adjacent_difference(nums.begin(), nums.end(), adjacent_difference_result.begin());

    std::cout << "Adjacent difference result: ";
    for (int num : adjacent_difference_result)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
