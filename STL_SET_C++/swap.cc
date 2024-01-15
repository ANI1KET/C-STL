// swap_set.cpp

// swap(other): Swaps the contents of two sets.

#include <iostream>
#include <set>

int main()
{
    std::set<int> set1;
    std::set<int> set2;

    set1.insert(5);
    set1.insert(10);

    set2.insert(3);
    set2.insert(7);

    std::cout << "Set 1 before swapping: ";
    for (int num : set1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Set 2 before swapping: ";
    for (int num : set2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    set1.swap(set2); // Swap the contents of the two sets

    std::cout << "Set 1 after swapping: ";
    for (int num : set1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Set 2 after swapping: ";
    for (int num : set2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
