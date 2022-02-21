#include<stdio.h>

int main()
{ int i, pre, prs, t=0,n;
printf("enter value of n=");
scanf("%d", &n) ;
pre=0;prs=1;
printf("%d  %d", pre, prs);
for(i=3;i<=n;i++)
{ t=prs+pre;
printf("  %d", t) ;
pre=prs; 
prs=t;
} 
    return 0;
}
