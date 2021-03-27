                                /*Area of circle*/
#include <stdio.h>
#define PI 3.141592653589793238

int main()
{
    double r,area;
    
    printf("Enter the Radius:\n");
    scanf("%lf", &r);
    area = PI * r * r;
    printf("Area = %lf\n", area);

}