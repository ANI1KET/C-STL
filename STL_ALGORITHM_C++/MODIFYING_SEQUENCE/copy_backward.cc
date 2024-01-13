// copy_backward.cpp

// Description: Copies elements from one range to another in reverse order.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination(5);

    std::copy_backward(source.begin(), source.end(), destination.end());

    std::cout << "Destination vector after copy_backward: ";
    for (int num : destination)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
