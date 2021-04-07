//Program to convert Centimetre to kilometer
#include <stdio.h>
int main()
{
    float cm,km,m;
    printf("Enter the length in Centimeter:");
    scanf("%f",&cm);
    km = cm / 100000;
    m = cm / 100;
    printf("\nCentimeter in Meter = %.2f\n", m);
    printf("\nCentimeter in Kilometer = %.2f", km);
} 