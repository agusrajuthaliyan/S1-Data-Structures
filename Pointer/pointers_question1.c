// Demonstrate the concept of pointers using int, float, and char data types.

#include <stdio.h>

int main() {
    int num = 10;
    float decimal = 5.5;
    char letter = 'A';

    int *intPtr = &num;
    float *floatPtr = &decimal;
    char *charPtr = &letter;

    printf("Integer: %d, Address: %p, Value via pointer: %d\n", num, (void*)&num, *intPtr);
    printf("Float: %.1f, Address: %p, Value via pointer: %.1f\n", decimal, (void*)&decimal, *floatPtr);
    printf("Char: %c, Address: %p, Value via pointer: %c\n", letter, (void*)&letter, *charPtr);

    return 0;
}