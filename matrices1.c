//WAP to find the sum and product of the elements of antidiagonal.

#include <stdio.h>

int main() {
    int n;
    int i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[10][10];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    int product = 1;
    for (i = 0; i < n; i++) {
        sum = sum + matrix[i][n - 1 - i];
        product = product * matrix[i][n - 1 - i];
    }

    printf("Sum of antidiagonal elements: %d\n", sum);
    printf("Product of antidiagonal elements: %d\n", product);

    return 0;
}