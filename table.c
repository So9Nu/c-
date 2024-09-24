#include<stdio.h>
int main()
{
    int number;
    printf("enter a number :");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        for (int j=1;j<=10;j++)
       {
           printf("%d * %d is %d\n",i,j,i*j);
       } 
       printf("\n");
        
    }
}