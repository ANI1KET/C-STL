// copy_n.cpp

// Description: Copies a specified number of elements from one range to another.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination(3);

    std::copy_n(source.begin(), 3, destination.begin());

    std::cout << "Destination vector after copy_n: ";
    for (int num : destination)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
