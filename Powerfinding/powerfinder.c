#include<stdio.h>
#include<math.h>
int main(){
    double base,expo,power;
    printf("Enter the Base number:\n");
    scanf("%lf",&base);
    printf("Enter the Exponential number:\n");
    scanf("%lf",&expo);
    power = pow(base,expo);
    printf("%.2lf",power);
    return 0;    
}