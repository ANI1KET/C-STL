// back_array.cpp

#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> nums = {1, 2, 3, 4, 5};
    int last_element = nums.back();

    std::cout << "Last element: " << last_element << std::endl;

    return 0;
}
