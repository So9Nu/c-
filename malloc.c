#include <stdio.h>
#include<stdlib.h>
int main(void)
{ 
int num,i,*ptr,sum=0;
printf("enter number of elements:");
scanf("%d",&num);
ptr=(int*)malloc(num*sizeof(int));

if(ptr==NULL){
    printf("memory not allocated\n");
    return -1;
}
printf("Enter the elements of array:");
for(i=0;i<num;i++){
    scanf("%d",ptr+i);
    sum=sum+*(ptr+i);
}
printf("sum of elements of = %d",sum);
}