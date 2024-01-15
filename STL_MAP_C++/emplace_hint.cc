// emplace_hint_map.cpp

// emplace_hint(hint, key, value): Inserts a key-value pair with a hint for the position.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    std::map<int, std::string>::iterator hint = myMap.end();

    hint = myMap.emplace_hint(hint, 1, "one");
    hint = myMap.emplace_hint(hint, 2, "two");
    hint = myMap.emplace_hint(hint, 3, "three");

    std::cout << "Map elements after emplace_hint: ";
    for (const auto &pair : myMap)
    {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;

    return 0;
}
