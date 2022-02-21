#include<stdio.h>
#include<string.h>
int main()
{ char s1[100], s2[100], r[100]; int i,j,t;
  printf("enter 1st string=") ;
  gets(s1) ;
  printf("enter 2nd string=") ;
  gets(s2);
 int l1=strlen(s1) ;
 int l2=strlen(s2) ;
for(i=0;i<=l1;i++)
{ if(s1[i] =='\0') 
  { for(j=l1;j<(l1+l2) ;j++) 
    { s1[j] =s2[t];
    
    t++ ;
   }
  } 
}
j=0; 
for(i=strlen(s1)-1;i>=0;i--)
{ r[j] =s1[i] ;j++ ;
} 
 puts(r) ; 
return 0;
}