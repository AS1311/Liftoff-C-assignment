#include<stdio.h>
int main()
{
int num1,num2;
printf("enter the numbers to find maximum:");
scanf("%d%d",&num1,&num2);
if(num1>num2)
printf("%d is maximum",num1);
else if(num2>num1) 
printf("%d is maximum",num2);
else
printf("%d and %d are equal", num1, num2); 
return 0;
} 
