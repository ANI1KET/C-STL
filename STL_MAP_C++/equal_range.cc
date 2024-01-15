// equal_range_map.cpp

// equal_range(key): Returns a pair of iterators denoting the range of elements with the given key.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    std::pair<std::map<int, std::string>::iterator, std::map<int, std::string>::iterator> range = myMap.equal_range(2);

    std::cout << "Range of elements with key 2:" << std::endl;
    for (auto it = range.first; it != range.second; ++it)
    {
        std::cout << "(" << it->first << ", " << it->second << ") ";
    }
    std::cout << std::endl;

    return 0;
}
