#include <stdio.h>

int main()

{
    float English,Maths,Physics,Chemistry,Computers,Sum,Percentage;

    printf("Enter marks of English");
    scanf("%f", &English);

    printf("Enter marks of Maths");
    scanf("%f", &Maths);

    printf("Enter marks of Physics");
    scanf("%f", &Physics);

    printf("Enter marks of Chemistry");
    scanf("%f", &Chemistry);

    printf("Enter marks of Computers");
    scanf("%f", &Computers);

    Sum=English+Maths+Physics+Chemistry+Computers;
    Percentage=Sum/5;

    printf("The sum of marks is:-%.2f",Sum);
    printf("The percentage of marks is:-%.2f",Percentage);
    
    return 0;

}