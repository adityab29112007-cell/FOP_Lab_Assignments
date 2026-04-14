#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int i;
    int fact = 1;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, i;
    float x, sum = 0;

    printf("Enter the value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        int sign = (i % 2 == 0) ? 1 : -1;
        int power = 2 * i + 1;

        sum += sign * (pow(x, power) / factorial(power));
    }

    printf("Sum of sine series = %.5f\n", sum);

    return 0;
}