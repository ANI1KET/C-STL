// erase_range_map.cpp

// erase(start, end): Removes elements within the specified range.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";
    myMap[4] = "four";
    myMap[5] = "five";

    std::map<int, std::string>::iterator start = myMap.find(2);
    std::map<int, std::string>::iterator end = myMap.find(4);

    if (start != myMap.end() && end != myMap.end())
    {
        myMap.erase(start, end); // Remove elements within the range
    }

    std::cout << "Map elements after erase by range: ";
    for (const auto &pair : myMap)
    {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;

    return 0;
}
