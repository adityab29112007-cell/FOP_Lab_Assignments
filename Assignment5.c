#include <stdio.h>

#define MAX 10

// Function for matrix addition
void addMatrices(int a[MAX][MAX], int b[MAX][MAX], int r, int c) {
    int i, j, sum[MAX][MAX];
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

// Function to find saddle point
void saddlePoint(int a[MAX][MAX], int r, int c) {
    int i, j, k;
    for(i=0;i<r;i++) {
        int min = a[i][0], col = 0;
        for(j=1;j<c;j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }
        int flag = 1;
        for(k=0;k<r;k++) {
            if(a[k][col] > min) {
                flag = 0;
                break;
            }
        }
        if(flag) {
            printf("Saddle Point = %d\n", min);
            return;
        }
    }
    printf("No Saddle Point\n");
}

// Function for inverse of 2x2 matrix
void inverse2x2(int a[2][2]) {
    int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det == 0) {
        printf("Inverse not possible (determinant = 0)\n");
        return;
    }

    printf("Inverse Matrix:\n");
    printf("%.2f %.2f\n",  (float)a[1][1]/det, -(float)a[0][1]/det);
    printf("%.2f %.2f\n", -(float)a[1][0]/det,  (float)a[0][0]/det);
}

// Function to check magic square
void magicSquare(int a[MAX][MAX], int n) {
    int i, j, sum = 0, temp;

    for(j=0;j<n;j++)
        sum += a[0][j];

    // check rows
    for(i=1;i<n;i++) {
        temp = 0;
        for(j=0;j<n;j++)
            temp += a[i][j];
        if(temp != sum) {
            printf("Not a Magic Square\n");
            return;
        }
    }

    // check columns
    for(j=0;j<n;j++) {
        temp = 0;
        for(i=0;i<n;i++)
            temp += a[i][j];
        if(temp != sum) {
            printf("Not a Magic Square\n");
            return;
        }
    }

    printf("It is a Magic Square\n");
}

int main() {
    int choice, r, c, n;
    int a[MAX][MAX], b[MAX][MAX];
    int i, j;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Addition of Matrices\n");
        printf("2. Saddle Point\n");
        printf("3. Inverse (2x2 Matrix)\n");
        printf("4. Magic Square Check\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter rows and columns: ");
                scanf("%d%d", &r, &c);

                printf("Enter Matrix A:\n");
                for(i=0;i<r;i++)
                    for(j=0;j<c;j++)
                        scanf("%d", &a[i][j]);

                printf("Enter Matrix B:\n");
                for(i=0;i<r;i++)
                    for(j=0;j<c;j++)
                        scanf("%d", &b[i][j]);

                printf("Sum Matrix:\n");
                addMatrices(a,b,r,c);
                break;

            case 2:
                printf("Enter rows and columns: ");
                scanf("%d%d", &r, &c);

                printf("Enter Matrix:\n");
                for(i=0;i<r;i++)
                    for(j=0;j<c;j++)
                        scanf("%d", &a[i][j]);

                saddlePoint(a,r,c);
                break;

            case 3:
                printf("Enter 2x2 Matrix:\n");
                for(i=0;i<2;i++)
                    for(j=0;j<2;j++)
                        scanf("%d", &a[i][j]);

                inverse2x2(a);
                break;

            case 4:
                printf("Enter order (n x n): ");
                scanf("%d", &n);

                printf("Enter Matrix:\n");
                for(i=0;i<n;i++)
                    for(j=0;j<n;j++)
                        scanf("%d", &a[i][j]);

                magicSquare(a,n);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}