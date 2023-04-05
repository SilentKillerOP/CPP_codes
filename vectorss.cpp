#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declare a vector of integers
    vector<int> v;

    // Push elements onto the back of the vector
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(1);
    v.push_back(5);
    v.insert(v.begin() + 2, 25); // insert 25 at index 2
    // Print the size of the vector
    cout << "Size of vector: " << v.size() << endl;

    // Sort the elements in non-decreasing order
    sort(v.begin(), v.end());

    // Print the contents of the vector
    cout << "Contents of vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Remove all elements with value 1
    v.erase(remove(v.begin(), v.end(), 1), v.end());

    // Print the new contents of the vector
    cout << "New contents of vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Reverse the order of the elements
    reverse(v.begin(), v.end());

    // Print the reversed contents of the vector
    cout << "Reversed contents of vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Find the index of the first occurrence of 4
    auto it = find(v.begin(), v.end(), 4);
    if (it != v.end())
    {
        int index = it - v.begin();
        cout << "Index of 4: " << index << endl;
    }

    // Check if the vector is empty
    if (v.empty())
    {
        cout << "Vector is empty." << endl;
    }
    else
    {
        cout << "Vector is not empty." << endl;
    }

    // Clear the vector
    v.clear();

    // Check if the vector is empty again
    if (v.empty())
    {
        cout << "Vector is empty." << endl;
    }
    else
    {
        cout << "Vector is not empty." << endl;
    }

    return 0;
}
