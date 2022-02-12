# include<stdio.h>
int main()
{
   char ch; int a, b; int x=0; double y=0.0;
    printf("enter a mathematical symbol(*, /, -, +) =");
    scanf("%c", &ch);
    printf("enter 2 numbers=");
    scanf("%d%d", &a, &b);
   switch(ch)
  {
       case'+': x=a+b;
                     printf("sum=%d", x);  break;
case'-': x=a-b;
               printf("difference =%d", x);  break;   
 case'*': x=a*b;
            printf("product=%d", x);  break;
 case'/': y=a/b;
              printf("quotient=%lf", y);  break;
 default: printf("invalid symbol. Enter symbol again ");
  }
      return 0;
}