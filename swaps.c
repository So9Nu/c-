#include <stdio.h>
int main(void)
{ 
int a,b,c;
printf("Enter the first number.\n");
scanf("%d",&a);
printf("Enter the Second number.\n");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("After swaping :\n");
printf("Value of a = %d\n",a);
printf("Value of b = %d\n",b);
return 0;



}