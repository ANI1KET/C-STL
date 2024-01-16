// front.cpp

// front() - Returns a reference to the first element.

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::cout << "Front element: " << nums.front() << std::endl;

    return 0;
}
