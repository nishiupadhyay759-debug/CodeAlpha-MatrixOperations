#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of Matrix 1: ");
    scanf("%d %d", &r1, &c1);

    int A[r1][c1];

    printf("Enter elements of Matrix 1:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter rows and columns of Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    int B[r2][c2];

    printf("Enter elements of Matrix 2:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix Addition
    if(r1 == r2 && c1 == c2) {
        int sum[r1][c1];

        printf("\nMatrix Addition:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                sum[i][j] = A[i][j] + B[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nAddition not possible.\n");
    }

    // Matrix Multiplication
    if(c1 == r2) {
        int mul[r1][c2];

        for(i = 0; i < r1; i++) {
            for(j = 0; j < c2; j++) {
                mul[i][j] = 0;
                for(k = 0; k < c1; k++) {
                    mul[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        printf("\nMatrix Multiplication:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c2; j++) {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMultiplication not possible.\n");
    }

    // Transpose of Matrix 1
    printf("\nTranspose of Matrix 1:\n");
    for(i = 0; i < c1; i++) {
        for(j = 0; j < r1; j++) {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }

    return 0;
}
