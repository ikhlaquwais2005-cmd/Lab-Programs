#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    printf("Enter a number");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
        sum=sum+i;
    }
    prontf("The sum is:-%d", sum);
    return 0;
}