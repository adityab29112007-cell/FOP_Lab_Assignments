#include <stdio.h>

// Function for factorial
int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function for power
float power(float x, int y) {
    float result = 1;
    int i;
    for(i = 1; i <= y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int choice;
    float a, b;
    int n;

    do {
        printf("\n===== CALCULATOR MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (x^y)\n");
        printf("6. Factorial (x!)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a * b);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if(b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Error! Division by zero.\n");
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%f %d", &a, &n);
                printf("Result = %.2f\n", power(a, n));
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%d", &n);
                if(n >= 0)
                    printf("Result = %d\n", factorial(n));
                else
                    printf("Factorial not defined for negative numbers.\n");
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 7);

    return 0;
}