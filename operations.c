#include <stdio.h>
void main()
{
    int a,b;
    char ope;
    printf("enter a and b");
    scanf("%d%d %c",&a,&b,&ope);
    switch(ope)
    {
    case '+':printf("the addition is %d",(a+b));
    break;
    case '-':printf("the subtraction is %d",(a-b));
    break;
    case '*':printf("the multiplication is %d",(a*b));
    break;
    case '/':printf("the division is %d",(a/b));
    break;
    case '%':printf("the module is %d",(a%b));
    break;
    default :printf("it is invalid");
    break;
