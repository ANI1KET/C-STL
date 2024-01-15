// value_comp_map.cpp

// value_comp(): Returns the comparison function used to compare values.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[3] = "three";
    myMap[1] = "one";
    myMap[2] = "two";

    std::map<int, std::string>::value_compare valueCompare = myMap.value_comp();

    std::cout << "Map elements using value_comp:" << std::endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it)
    {
        std::cout << "(" << it->first << ", " << it->second << ") ";
        if (!valueCompare(*it, *(--myMap.end())))
        {
            break;
        }
    }
    std::cout << std::endl;

    return 0;
}
