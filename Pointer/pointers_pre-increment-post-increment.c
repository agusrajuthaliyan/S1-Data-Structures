// Demonstrate the effect of post-increment and pre-increment operators in pointers.
// Hint: Is (*ptr)++ and *(ptr++) different ??

#include <stdio.h>

void main() 
{
    int arr[] = {10, 20, 30};
    int *ptr = arr;
    printf("Initial pointer position: %p\n", (void *)ptr);
    printf("Array values: %d, %d, %d\n", arr[0], arr[1], arr[2]);
    printf("\nDemonstrating (*ptr)++:\n");
    printf("Before (*ptr)++, *ptr = %d\n", *ptr);
    (*ptr)++; 
    printf("After (*ptr)++, *ptr = %d\n", *ptr);
    printf("Pointer position after (*ptr)++: %p\n", (void *)ptr);
    printf("Array values: %d, %d, %d\n", arr[0], arr[1], arr[2]);
    ptr = arr;
    printf("\nDemonstrating *(ptr++):\n");
    printf("Before *(ptr++), *ptr = %d\n", *ptr);
    printf("Pointer position before *(ptr++): %p\n", (void *)ptr);
    printf("Value accessed by *(ptr++) = %d\n", *ptr++);
    printf("Pointer position after *(ptr++): %p\n", (void *)ptr);
    printf("Array values: %d, %d, %d\n", arr[0], arr[1], arr[2]);
}
