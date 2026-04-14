#include <stdio.h>

void swap(int a, int b);        // without pointers
void swapPtr(int *a, int *b);   // with pointers

int main() {
    int x = 10, y = 20;

    printf("Before swap:\n");
    printf("x = %d, y = %d\n", x, y);

    // Call without pointers
    swap(x, y);

    printf("After swap (without pointers):\n");
    printf("x = %d, y = %d\n", x, y);

    // Call with pointers
    swapPtr(&x, &y);

    printf("After swap (with pointers):\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

// Function definitions
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapPtr(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}