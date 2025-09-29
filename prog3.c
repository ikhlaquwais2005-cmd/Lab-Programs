#include<stdio.h>
int main()
{
    float radius,area,circumference;
    printf("Enter the Radius");
    scanf("%f", &radius);

    area=3.14*radius*radius;
    circumference=2*3.14*radius;

    printf("The area is:-%.2f",area);
    printf("The circumference is:-%.2f", circumference);
    return 0;
}