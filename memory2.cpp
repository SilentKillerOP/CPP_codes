#include <iostream>
using namespace std;

int main() {
    // allocating memory for an integer using new
    int* numPtr = new int;
    
    // assigning a value to the allocated memory
    *numPtr = 10;
    
    // accessing the value of the allocated memory
    cout << "Value of numPtr: " << *numPtr << endl;
    
    // deallocating the memory
    delete numPtr;
    
    // allocating memory for an array of integers using new
    int* arrPtr = new int[5];
    
    // assigning values to the allocated memory
    for(int i = 0; i < 5; i++) {
        arrPtr[i] = i + 1;
    }
    
    // accessing the values of the allocated memory
    cout << "Values of arrPtr: ";
    for(int i = 0; i < 5; i++) {
        cout << arrPtr[i] << " ";
    }
    cout << endl;
    
    // deallocating the memory
    delete[] arrPtr;
    
    return 0;
}
