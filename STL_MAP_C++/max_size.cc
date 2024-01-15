// max_size_map.cpp

// max_size(): Returns the maximum number of key-value pairs the map can hold.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    std::cout << "Maximum number of key-value pairs the map can hold: " << myMap.max_size() << std::endl;

    return 0;
}
