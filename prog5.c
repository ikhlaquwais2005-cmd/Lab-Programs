#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of 1st No");
    scanf("%d", &a);
    printf("Enter the value of 2nd No");
    scanf("%d", &b);

    c=a;
    a=b;
    b=c;

    printf("The 1st No is:-%d\n The 2nd No is:-%d",a,b);
    return 0;
}