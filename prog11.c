#include<stdio.h>

int main()
{
    float a,b;
    char ch;

    printf("Enter the first operand");
    scanf("%f", &a);

    printf("Enter the second operand");
    scanf("%f",&b);

    printf("Enter the operator (+,-,*,/,%%)");
    scanf(" %c",&ch);

    switch(ch)
    {
        case '+':
        printf("The sum is:- %.2f",a+b);
        break;

        case '-':
        printf("The Subtraction is:-%.2f",a-b);
        break;

        case '*':
        printf("The Multiplication is:-%.2f",a*b);
        break;

        case '/':
        printf("The divide is:-%.2f",a/b);
        break;

        case '%%':
        printf("The Mod is:-%.2f",a%b);
        break;

        default:
        printf("Invalid operator");
    }
   
    return 0;
}