// min_max.cpp

// Description [min] : Returns the smaller of two values.
// Description [max] : Returns the larger of two values.

#include <iostream>
#include <algorithm>

int main()
{
    int a = 5, b = 10;

    int min_value = std::min(a, b);
    int max_value = std::max(a, b);

    std::cout << "Min value: " << min_value << std::endl;
    std::cout << "Max value: " << max_value << std::endl;

    return 0;
}
