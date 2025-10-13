#include<stdio.h>

int main()
{

    int n,fac=1;

    printf("Enter an integer");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Enter a positive number");
    }
    else if(n==0)
    {
        printf("The factorial of %d is 1",n);
    }
    else
    {

        for(int i=1;i<=n;i++)
        {
        fac=fac*i;
        }
    }
    
    printf("The factorial of %d is:-",n);
    
    return 0;
}