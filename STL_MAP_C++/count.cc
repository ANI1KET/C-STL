// count_map.cpp

// count(key): Returns the number of elements with the specified key.

#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> myMap;

    myMap[1] = "one";
    myMap[2] = "two";
    myMap[2] = "second_two"; // Overwriting the value for key 2
    myMap[3] = "three";

    int count1 = myMap.count(2);
    int count2 = myMap.count(4);

    std::cout << "Number of elements with key 2: " << count1 << std::endl;
    std::cout << "Number of elements with key 4: " << count2 << std::endl;

    return 0;
}
