#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char designation[50];
    char gender;
    int day, month, year;
    float salary;
};

// Function to count total employees
void totalEmployees(int n) {
    printf("Total number of employees = %d\n", n);
}

// Function to count male and female employees
void countGender(struct Employee e[], int n) {
    int male = 0, female = 0, i;

    for(i = 0; i < n; i++) {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            female++;
    }

    printf("Male Employees = %d\n", male);
    printf("Female Employees = %d\n", female);
}

// Function to display employees with salary > 10000
void highSalary(struct Employee e[], int n) {
    int i;
    printf("\nEmployees with salary > 10000:\n");

    for(i = 0; i < n; i++) {
        if(e[i].salary > 10000) {
            printf("%s\n", e[i].name);
        }
    }
}

// Function to display Asst Manager employees
void asstManager(struct Employee e[], int n) {
    int i;
    printf("\nEmployees with designation 'Asst Manager':\n");

    for(i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "Asst Manager") == 0) {
            printf("%s\n", e[i].name);
        }
    }
}

int main() {
    struct Employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Designation: ");
        scanf(" %[^\n]", e[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Date of Joining (DD MM YYYY): ");
        scanf("%d %d %d", &e[i].day, &e[i].month, &e[i].year);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    // Function calls
    printf("\n--- Employee Details Summary ---\n");
    totalEmployees(n);
    countGender(e, n);
    highSalary(e, n);
    asstManager(e, n);

    return 0;
}