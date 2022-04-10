#include<stdio.h>

int main()
{ int a, b;
printf ("enter 2 nos. a and b=") ;
scanf("%d %d", &a, &b) ;
swap(a, b) ;
}
swap(int m, int n)
{ int t =m;
  m=n;
  n=t;
printf("a= %d", m) ;
printf("\n b= %d", n) ;
} 