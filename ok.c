#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to add two integers
int add_integers(int a, int b) {
    return a + b;
}

// Function to add two floats
float add_floats(float a, float b) {
    return a + b;
}

// Function to print array elements
void print_array(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Function to find maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main(){
    // Basic printing
    printf("=== Generic C Code Examples ===\n");
    printf("Hello, World!\n");
    
    // Integer operations
    int num1 = 15, num2 = 25;
    int sum = add_integers(num1, num2);
    printf("Adding %d + %d = %d\n", num1, num2, sum);
    
    // Float operations
    float f1 = 3.14f, f2 = 2.86f;
    float float_sum = add_floats(f1, f2);
    printf("Adding %.2f + %.2f = %.2f\n", f1, f2, float_sum);
    
    // Character operations
    char letter = 'A';
    printf("Character: %c, ASCII value: %d\n", letter, letter);
    
    // String operations
    char name[50] = "Generic User";
    printf("Hello, %s!\n", name);
    printf("String length: %lu\n", strlen(name));
    
    // Array operations
    int numbers[] = {10, 20, 30, 40, 50};
    int array_size = sizeof(numbers) / sizeof(numbers[0]);
    print_array(numbers, array_size);
    
    // Find maximum
    int max_num = max(num1, num2);
    printf("Maximum of %d and %d is: %d\n", num1, num2, max_num);
    
    // Factorial calculation
    int fact_num = 5;
    printf("Factorial of %d is: %d\n", fact_num, factorial(fact_num));
    
    // Loop examples
    printf("Counting from 1 to 5: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // Conditional statements
    int score = 85;
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D or F\n");
    }
    
    // Memory allocation example
    int *dynamic_array = malloc(3 * sizeof(int));
    if (dynamic_array != NULL) {
        dynamic_array[0] = 100;
        dynamic_array[1] = 200;
        dynamic_array[2] = 300;
        
        printf("Dynamic array: ");
        for (int i = 0; i < 3; i++) {
            printf("%d ", dynamic_array[i]);
        }
        printf("\n");
        
        free(dynamic_array); // Don't forget to free memory
    }
    
    // Simple calculations
    printf("Square of 7: %d\n", 7 * 7);
    printf("10 divided by 3: %.2f\n", 10.0 / 3.0);
    printf("10 modulo 3: %d\n", 10 % 3);
    
    printf("=== End of Examples ===\n");
    
    return 0;
}