#include <stdio.h>

int main() {
    float basic, hra, ta, gross, tax, net;

    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    // Calculations
    hra = 0.10 * basic;   // 10% of basic
    ta  = 0.05 * basic;   // 5% of basic

    gross = basic + hra + ta;

    tax = 0.02 * gross;   // 2% professional tax

    net = gross - tax;

    // Output
    printf("\nBasic Pay = %.2f", basic);
    printf("\nHRA (10%%) = %.2f", hra);
    printf("\nTA (5%%) = %.2f", ta);
    printf("\nGross Salary = %.2f", gross);
    printf("\nProfessional Tax (2%%) = %.2f", tax);
    printf("\nNet Salary = %.2f\n", net);

    return 0;
}