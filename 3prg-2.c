#include<stdio.h>
int prime(int, int) ;
void main()
{ int n;
printf("enter a number=") ;
scanf("%d",&n);
if(prime(n,2)==0)
printf("%d prime",n) ;
else 
printf("%d not prime", n) ;
} 
 prime(int m, int i) 
{ 
if(m==i) 
return 0;
else if(m%i==0)
return 1;
else 
return prime(m, i++);
}
    