#include<stdio.h>

int main()
{int n, i, j;
printf("enter value of n=") ;
scanf("%d", &n) ;
for(i=1;i<=n;i++)
{ if(i==1 || i==n) 
  { printf("\n") ;
    for(j=1; j<=n; j++) 
     { printf("*") ;
     }
   } 
    else 
    { printf("\n*") ;
      for(j=2;j<n;j++)
      { printf(" ") ;
       } 
       printf("*") ;
    } 
 }  
    return 0;
}