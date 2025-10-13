#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the 1st no");
    scanf("%d", &a);

    printf("Enter the 2nd no");
    scanf("%d", &b);

    if(a==b)
    {
        printf("The two number are equal");
    }
    else
    {
        printf("The two number are not equal");
    }

    return 0;
}