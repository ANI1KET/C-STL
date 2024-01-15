// lower_bound_map.cpp

// lower_bound(key): Returns an iterator to the first element with a key not less than the given key.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    std::map<int, std::string>::iterator it = myMap.lower_bound(2);

    if (it != myMap.end())
    {
        std::cout << "Element with key not less than 2: (" << it->first << ", " << it->second << ")" << std::endl;
    }
    else
    {
        std::cout << "No element with key not less than 2 found." << std::endl;
    }

    it = myMap.lower_bound(4);

    if (it != myMap.end())
    {
        std::cout << "Element with key not less than 4: (" << it->first << ", " << it->second << ")" << std::endl;
    }
    else
    {
        std::cout << "No element with key not less than 4 found." << std::endl;
    }

    return 0;
}
