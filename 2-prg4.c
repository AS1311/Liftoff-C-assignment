#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,div,r,md,fd,ld,newnum,t;
    printf("enter a number=");
    scanf("%d", &num);
    n=num;
    while(num>0)
    { num=num/10;
    t+=1;} 
    div=pow(10,(t-1));
    fd=n/div;
    r=n%div;
    md=r/10;
    ld=n%10;
    newnum=(ld*div)+(md*10)+fd;
    printf("new number after swapping 1st and last digit= %d", newnum);
    return 0;
}