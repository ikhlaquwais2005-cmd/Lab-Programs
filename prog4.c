#include<stdio.h>

int main()
{
    float C,F;

    printf("Enter the temperature in Centigrade");
    scanf("%f", &C);

    F=(1.8*(C+32));

    printf("The temperature in Fahrenheit is:-%.2f",F);

    return 0;
}