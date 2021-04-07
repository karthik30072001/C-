#include <stdio.h>
int main()
{
    float farenheat, celcius;
    printf("Enter the temperature in Celcius = ");
    scanf("%f", &celcius);
    farenheat = (celcius *9/5) + 32;
    printf("\n%.2f Celcius in Farenheat is %.2f\n\n", celcius, farenheat);

//Program to find farenheat to celcius
    float farenheat1, celcius1;
    printf("\nEnter the temperature in Farenheat = ");
    scanf("%f", &farenheat1);
    celcius1 = (farenheat1 - 32) * 5/9;
    printf("\n%.2f Farenheat in Celcius is %.2f", farenheat1, celcius1);

}