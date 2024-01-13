// equal_range.cpp

// Description: Finds a range of elements matching a given value in a sorted range.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value_to_search = 7;

    auto equal_range = std::equal_range(nums.begin(), nums.end(), value_to_search);
    std::cout << "\nEqual range of " << value_to_search << " is between positions: "
              << equal_range.first - nums.begin() << " and " << equal_range.second - nums.begin() << std::endl;

    return 0;
}
