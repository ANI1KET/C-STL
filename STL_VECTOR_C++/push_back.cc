// push_back.cpp

// push_back(value) - Adds an element to the end of the vector.

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums;
    nums.push_back(42);

    std::cout << "Vector after push_back: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
