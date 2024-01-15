// insert_map.cpp

// insert(pair): Inserts a key-value pair into the map.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap.insert(std::pair<int, std::string>(1, "one"));
    myMap.insert(std::pair<int, std::string>(2, "two"));
    myMap.insert(std::pair<int, std::string>(3, "three"));

    std::cout << "Map elements after insert: ";
    for (const auto &pair : myMap)
    {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;

    return 0;
}
