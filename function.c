#include <stdio.h>
int main(void)
{ 
int n,sum=0;
printf("enter a number :");
scanf("%d",&n);
printf("\nthe odd number are :");

for(int i=1;i<= n;i++){
printf("%d  ",2*i-1);
sum+=2*i-1;
}
 printf("\nThe Sum of odd Natural Number upto %d terms : %d \n", n, sum);
}