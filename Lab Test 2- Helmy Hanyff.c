#include <stdio.h>

int main() {
    // Create and set up array with 5 numbers
    int numbers[5] = {5, 10, 15, 20, 25};   // Array with numbers 1 to 5
    
    // Print title
    printf("Different ways to access memory\n");
    printf("==============================\n\n");
    
    // First way: Sequential access
    printf("1. Sequential Access (In Order):\n");
    for(int i = 0; i < 5; i++) {                     // Go through array in order
        printf("Reading position %d: %d\n", i, numbers[i]);  // Show each number in order
    }
    
    // Second way: Random access
    printf("\n2. Random Access (Jumping Around):\n");
    // Access array elements in random order
    printf("Reading position 3: %d\n", numbers[3]);   // Fourth number
    printf("Reading position 0: %d\n", numbers[0]);   // First number
    printf("Reading position 4: %d\n", numbers[4]);   // Last number
    printf("Reading position 1: %d\n", numbers[1]);   // Second number
    printf("Reading position 2: %d\n", numbers[2]);   // Third number
    
    return 0;
}