// back.cpp

// back() - Returns a reference to the last element.

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::cout << "Back element: " << nums.back() << std::endl;

    return 0;
}
