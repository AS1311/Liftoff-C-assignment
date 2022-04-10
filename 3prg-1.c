#include<stdio.h>

void main()
{ int n1, n2;
printf("enter 2 nos=") ;
scanf("%d %d", &n1, &n2);
printf("GCD of %d and %d=%d", n1, n2, gcd(n1,n2)) ;
    
}
int gcd(int n1, int n2)
{ if(n2!=0)
return gcd(n2, n1%n2) ;
else
return n1;
} 