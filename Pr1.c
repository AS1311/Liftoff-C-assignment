#include<stdio.h>

int main()
{   int rn ; char n, b, h;
    printf("enter name= ") ;
    scanf("%s", n);
    printf("enter regd. number= ") ;
    scanf("%d", &rn) ;
    printf("enter branch= ") ;
    scanf("%s", b) ;
    printf("enter hobbies= ") ;
    scanf("%s", h) ;
    printf("\n\n name=%s \n Regd.no=%d \n branch=%s \n Hobbies=%s \n",n, rn, b, h);
    return 0;
}