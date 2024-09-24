#include <stdio.h>

int main(void)
{
    int classes, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &classes);
    
    for(int i = 0; i < 6; i++) // Removed the semicolon here
    {
        printf("%d\n",i);
        sum += classes - i; // Instead of pointer, use subtraction for illustration
    }
    
    printf("Sum is %d\n", sum);
    return 0;
}