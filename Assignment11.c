#include <stdio.h>
#include <math.h>

// Function to check prime
int isPrime(int n) {
    int i;
    if(n <= 1) return 0;
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

// Function for factorial
int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to print prime factors
void primeFactors(int n) {
    int i;
    printf("Prime factors: ");
    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // a) Square root
    if(num >= 0)
        printf("Square Root = %.2f\n", sqrt(num));
    else
        printf("Square Root not defined for negative numbers\n");

    // b) Square
    printf("Square = %d\n", num * num);

    // c) Cube
    printf("Cube = %d\n", num * num * num);

    // d) Prime check
    if(isPrime(num))
        printf("%d is a Prime number\n", num);
    else
        printf("%d is not a Prime number\n", num);

    // e) Factorial
    if(num >= 0)
        printf("Factorial = %d\n", factorial(num));
    else
        printf("Factorial not defined for negative numbers\n");

    // f) Prime factors
    if(num > 1)
        primeFactors(num);
    else
        printf("Prime factors not applicable\n");

    return 0;
}