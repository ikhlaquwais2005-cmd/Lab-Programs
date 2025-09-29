#include<stdio.h>
int main()
{
    int n,fac=1;
    printf("Enter an integer");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("The factorial of %d is:-",n);
    return 0;
}