// begin_end_array.cpp

#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> nums = {1, 2, 3, 4, 5};

    std::cout << "Array elements: ";
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
