#include<stdio.h>

int main()
{int a[2][2],b[2][2], p[2][2] ,s[2][2],k, i,j;
printf("enter elements of array a=") ;
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
  { scanf("%d", &a[i][j]);
  } 
} 
printf("enter elements of array b=") ;
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
  { scanf("%d", &b[i][j]);
  } 
} 
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
  { p[i][j] =0;
    for(k=0;k<2;k++)
    {
    p[i][j]=p[i][j]+(a[i][k]*b[k][j]);
   } 
    s[i][j]=a[i][j]+b[i][j] ;
   } 
}
printf("product of elements =\n");
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
  {  printf("%d  ",p[i][j]) ;
  } 
printf("\n") ;
}
printf("sum of elements=\n") ;
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
  {  printf("%d  ",s[i][j]) ;
  } 
printf("\n") ;
} 
    return 0;
}