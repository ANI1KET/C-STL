// resize.cpp

// resize(new_size) - Resizes the vector to contain the given number of elements.

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5};
    nums.resize(8, 0); // Resize to 8 elements, fill with 0

    std::cout << "Vector after resize: ";
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
