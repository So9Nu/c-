#include <stdio.h>
int main(void)
{ 
int a=5;
int b= ++a * a++;
printf("%d",b);
}