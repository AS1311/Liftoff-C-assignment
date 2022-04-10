#include<stdio.h>

int main()
{int n;
    printf("enter a number =");
    scanf("%d", &n) ;
    check(n) ;
}
 check(int m)
{ if(m%2==0)
printf("even ") ;
else
printf("odd") ;
} 