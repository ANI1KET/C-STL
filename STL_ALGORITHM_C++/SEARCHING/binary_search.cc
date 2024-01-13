// binary_search.cpp

// Description: Checks if a value exists in a sorted range.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value_to_search = 7;

    bool is_present = std::binary_search(nums.begin(), nums.end(), value_to_search);
    std::cout << "Value " << value_to_search << " is present: " << std::boolalpha << is_present << std::endl;

    return 0;
}
