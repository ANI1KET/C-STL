// erase_key_map.cpp

// erase(key): Removes the key-value pair with the given key.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    myMap.erase(2); // Remove the key-value pair with key 2

    std::cout << "Map elements after erase: ";
    for (const auto &pair : myMap)
    {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;

    return 0;
}
