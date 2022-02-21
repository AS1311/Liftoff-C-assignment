#include<stdio.h>

int main()
{ int n[10], i, e=0,odd=0;
for(i=1;i<=10;i++)
{ scanf("%d", &n[i]) ;
    if(n[i] %2==0)
    e=e+n[i];
    else
    odd=odd+n[i] ;
   } 
printf("sum of even nos.=%d \n sum of odd nos. =%d", e,odd) ;
    return 0;
}