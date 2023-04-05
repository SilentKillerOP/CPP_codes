#include <iostream>
#include <cstdlib>

int main() {
    // Allocate memory for 5 integers using malloc
    int* ptr1 = (int*)malloc(5 * sizeof(int));
    if (ptr1 == NULL) {
        std::cout << "Memory allocation failed!" << std::endl;
        return 1;
    }
    
    // Allocate memory for 5 integers using calloc
    int* ptr2 = (int*)calloc(5, sizeof(int));
    if (ptr2 == NULL) {
        std::cout << "Memory allocation failed!" << std::endl;
        return 1;
    }
    
    // Store values in the memory locations
    for (int i = 0; i < 5; i++) {
        *(ptr1 + i) = i + 1;
        *(ptr2 + i) = i + 1;
    }
    
    // Display values
    std::cout << "Values in memory allocated using malloc:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << *(ptr1 + i) << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Values in memory allocated using calloc:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << *(ptr2 + i) << " ";
    }
    std::cout << std::endl;
    
    // Deallocate memory
    free(ptr1);
    free(ptr2);
    
    return 0;
}
