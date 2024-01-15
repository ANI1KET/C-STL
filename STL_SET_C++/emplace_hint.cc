// emplace_hint_set.cpp

// emplace_hint(hint, value): Inserts a new element with a hint for the position.

#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet;

    std::set<int>::iterator hint = mySet.emplace_hint(mySet.end(), 5); // Insert using hint

    mySet.emplace_hint(hint, 10);
    mySet.emplace_hint(hint, 3);

    std::cout << "Set elements after emplace_hint: ";
    for (int num : mySet)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
