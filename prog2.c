#include<stdio.h>
#include<math.h>

int main()

{

    float P,A,R,T,SI,CI;

    printf("Enter Principal");
    scanf("%f", &P);

    printf("Enter Rate of Interest");
    scanf("%f", &R);

    printf("Enter Time");
    scanf("%f", &T);

    SI= ((P*R*T)/100);
    A= P*pow(1+R/100,T);
    CI=A-P;

    printf("The Simple interest is:-%.2f", SI);
    printf("The compound interest is:-%.2f", CI);

    return 0;

}