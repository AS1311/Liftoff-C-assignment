#include<stdio.h>

int main()
{   double r, d, ar, cr;
    printf("enter the radius of circle= ") ;
    scanf("%lf", &r) ;
    d=2*r;
    ar=r*r*3.14;
    cr=2*3.14*r;
    printf("diameter= %lf \n area= %lf \n circumference= %lf", d, ar, cr) ;
    return 0;
}