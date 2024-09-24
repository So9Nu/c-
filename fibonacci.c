#include <stdio.h>
int main(void)
{ 
int n,i,a=0,b=1,c=0;
printf("Enter the limit:");
scanf("%d",&n);
printf("The  %d number  of the Fibonacci series are:\n",n);
for(i=1;i<=n;i++)
{
    a=b;
    b=c;
    c=a+b;
}
printf("%d",b);
}