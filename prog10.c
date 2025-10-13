#include<stdio.h>

int main()
{

    float eng,math,phy,chem,comp,p;
    printf("Enter marks of English");
    scanf("%f", &eng);

    printf("Enter marks of Maths");
    scanf("%f", &math);

    printf("Enter marks of Physics");
    scanf("%f", &phy);

    printf("Enter marks of Chemistry");
    scanf("%f", &chem);

    printf("Enter marks of Computers");
    scanf("%f", &comp);
    
    p= ((eng+math+phy+chem+comp)/5);

    if(p>=90 && p<=100)
    {
        printf("The grade of student is 'A' wit percentage %.2f", p);
    }
    else if(p>=80 && p<=90)
    {
        printf("The grade of student is 'B' with percentage %.2f",p);
    }
    else if(p>=60 && p<=80)
    {
        printf("The grade of student is 'C' with percentage %.2f",p);
    }
    else
    {
        printf("The grade of student is 'D' with percentage %.2f",p);
    }

    return 0;
}