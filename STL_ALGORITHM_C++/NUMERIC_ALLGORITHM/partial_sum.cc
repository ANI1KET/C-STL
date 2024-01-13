// partial_sum.cpp

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::vector<int> partial_sum_result(nums.size());

    std::partial_sum(nums.begin(), nums.end(), partial_sum_result.begin());

    std::cout << "Partial sum result: ";
    for (int num : partial_sum_result)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
