#include<stdio.h>

void main()
{  static int n; int a[30]; int l;
printf ("no. of array ekements=") ;
scanf("%d", &n) ;
   printf ("enter array elements");
   for(int i=1;i<=n;i++)
 scanf("%d", &a[i]) ;
   l= lrg(a, n) ;
printf("largest element=%d", l) ;
}
int lrg(int b[100], int m)
{ int lr=b[0]; 
for(int i=1;i<=m;i++)
  { if(b[i] > lr)
lr=b[i] ;
}
return lr;
} 