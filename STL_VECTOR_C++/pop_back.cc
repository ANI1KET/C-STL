// pop_back.cpp

// pop_back() - Removes the last element from the vector.

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5};
    nums.pop_back();

    std::cout << "Vector after pop_back: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
