#include <stdio.h>

// Function prototype declaration
void checkEvenOdd(int number);

int main() {
    int limit;

    printf("===================================\n");
    printf("   SYSTEM COMPILATION DESKTOP\n");
    printf("===================================\n");

    // Request user input
    printf("Enter an upper limit integer: ");
    if (scanf("%d", &limit) != 1) {
        printf("Error: Invalid numeric input execution.\n");
        return 1; // Exit with error state
    }

    printf("\nProcessing numerical matrix up to %d:\n", limit);
    
    // Iteration loop structure
    for (int i = 1; i <= limit; i++) {
        printf("Value [%d]: ", i);
        checkEvenOdd(i);
    }

    printf("===================================\n");
    printf("Execution successfully terminated.\n");
    return 0; // Return exit success status code
}

// Function definition to evaluate integer properties
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }
}