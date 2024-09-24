#include <stdio.h>

int main(void) {
    int a[2][2];
    int i, j;

    // Input values
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter a number: ");
            scanf("%d", &a[i][j]);
        }
    }

    // Print the array
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", a[i][j]); // Remove the & operator
        }
        printf("\n");
    }

    return 0;
}