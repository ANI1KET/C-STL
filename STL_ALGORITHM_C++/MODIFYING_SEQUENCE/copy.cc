// copy.cpp

// Description: Copies elements from one range to another.

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination(5);

    std::copy(source.begin(), source.end(), destination.begin());

    std::cout << "Destination vector after copy: ";
    for (int num : destination)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
