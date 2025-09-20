//WAP to display the sum of 2 array.

#include <stdio.h>

int main() {
    int size, i;
    int arr1[100], arr2[100], sum[100];

    printf("Enter the size of arrays: ");
    scanf("%d", &size);

    printf("Enter elements of first array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    printf("Sum of two arrays:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}