#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    // Create an empty map
    map<string, int> myMap;

    // Insert elements into the map
    myMap.insert(make_pair("Alice", 27));
    myMap.insert(make_pair("Bob", 31));
    myMap.insert(make_pair("Charlie", 19));

    // Access the value of a specific key
    cout << myMap["Alice"] << endl;

    // Check if a key exists in the map
    if (myMap.count("Bob"))
    {
        cout << "Bob is in the map" << endl;
    }

    // Iterate over the elements of the map
    for (auto it = myMap.begin(); it != myMap.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    // Erase an element from the map
    myMap.erase("Charlie");

    // Clear all elements from the map
    myMap.clear();
    
    // Declare a map of maps
    map<int, map<int, int>> myMap1;

    // Insert elements
    myMap1[0][0] = 1;
    myMap1[0][1] = 2;
    myMap1[1][0] = 3;
    myMap1[1][1] = 4;

    // Access elements
    cout << myMap1[0][0] << endl; // Output: 1
    cout << myMap1[0][1] << endl; // Output: 2
    cout << myMap1[1][0] << endl; // Output: 3
    cout << myMap1[1][1] << endl; // Output: 4

    return 0;
}
