// accumulate.cpp

// Description: Computes the sum of elements in a range.

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5};

    int sum = std::accumulate(nums.begin(), nums.end(), 0);

    std::cout << "Sum of elements: " << sum << std::endl;

    return 0;
}
