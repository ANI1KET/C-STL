// upper_bound_map.cpp

// upper_bound(key): Returns an iterator to the first element with a key greater than the given key.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    std::map<int, std::string>::iterator it = myMap.upper_bound(2);

    if (it != myMap.end())
    {
        std::cout << "Element with key greater than 2: (" << it->first << ", " << it->second << ")" << std::endl;
    }
    else
    {
        std::cout << "No element with key greater than 2 found." << std::endl;
    }

    it = myMap.upper_bound(3);

    if (it != myMap.end())
    {
        std::cout << "Element with key greater than 3: (" << it->first << ", " << it->second << ")" << std::endl;
    }
    else
    {
        std::cout << "No element with key greater than 3 found." << std::endl;
    }

    return 0;
}
