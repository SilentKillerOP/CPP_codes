#include <iostream>
#include <map>
using namespace std;

int main() {
    // Declare a map of maps
    map<int, map<int, int>> myMap;

    // Insert elements
    myMap[0][0] = 1;
    myMap[0][1] = 2;
    myMap[1][0] = 3;
    myMap[1][1] = 4;

    // Access elements
    cout << myMap[0][0] << endl; // Output: 1
    cout << myMap[0][1] << endl; // Output: 2
    cout << myMap[1][0] << endl; // Output: 3
    cout << myMap[1][1] << endl; // Output: 4

    return 0;
}
