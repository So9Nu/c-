#include <stdio.h>

int main(void) {
    int num, k=1;
    int spc;
    
    printf("Enter number of rows: ");
    scanf("%d", &num);
    
    spc = num + 4 - 1;  // Space calculation
    
    for (int i = 1; i <= num; i++) {
        // Print leading spaces
        for (int j = spc; j >= 1; j--) {
            printf(" ");
        }
        
        // Print the numbers in the current row
        for (int j = 1; j <= i; j++) {
            printf(" %d",k++);
        }
        
        // Move to the next line
        printf("\n");
        
        // Decrease the number of spaces for the next row
        spc--;
    }
    
    return 0;
}