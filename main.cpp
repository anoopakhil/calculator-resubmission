#include <iostream>
#include<conio.h>
#include<stdio.h>
int main()
{
    int a,b,c;
    char e;
    printf("entre the value of a ");
    scanf("%d",&a);
    printf("select an operator");
    scanf(" %c",&e);
    printf("\nentre the value of b ");
    scanf("%d",&b);
    switch (e)
    {
    case '+':c=a+b;
    printf("the sum of a and b is",c);
    break;
    case '-':c=a-b;
    printf("the difference between a and b is",c);
    break;
    case '*':c=a*b;
    printf("the product of a and b is",c);
    break;
    case '/':c=a/b;
    printf("the division of a and b is",c);
    break;
    case 'default':printf("select an operator");
    break;
}
return 0;
}
