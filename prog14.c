#include<stdio.h>

int main()
{
    int n,i;
    int even_sum=0;
    int odd_sum=0;

    printf("Enter the number limit");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even_sum=even_sum+i;
        }
        else
        {
            odd_sum=odd_sum+i;
        }
    }

    printf("The sum of even numbers from 1 to %d is:-%d\n",n,even_sum);
    printf("The sum of odd numbers from 1 to %d is:-%d",n,odd_sum);

    return 0;
}