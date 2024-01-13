// upper_bound.cpp

// Description: Finds the first element greater than a given value in a sorted range.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value_to_search = 7;

    auto upper = std::upper_bound(nums.begin(), nums.end(), value_to_search);
    std::cout << "Upper bound of " << value_to_search << " is at position: " << upper - nums.begin() << std::endl;

    return 0;
}
