#include<stdio.h>

int main()
{
    int Number1,Number2,Number3;

    printf("Enter the first number");
    scanf("%d", &Number1);

    printf("Enter the second number");
    scanf("%d", &Number2);

    printf("Enter the third number");
    scanf("%d", &Number3);

    if(Number1>=Number2 && Number1>=Number3)
    {
        printf("The greatest is the first number:-%d", Number1);
    }
    else if(Number2>=Number1 && Number2>=Number3)
    {
        printf("The greatest is the second number:-%d", Number2);
    }
    else
    {
        printf("The greatest is the third number:-%d", Number3);
    }

    return 0;
}