// find.cpp

// Description: Finds the first occurrence of a value in a range.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int value_to_find = 5;

    auto found = std::find(nums.begin(), nums.end(), value_to_find);
    if (found != nums.end())
    {
        std::cout << "Value " << value_to_find << " found at position: " << found - nums.begin() << std::endl;
    }
    else
    {
        std::cout << "Value " << value_to_find << " not found." << std::endl;
    }

    return 0;
}
