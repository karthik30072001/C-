#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter first number\n");
    scanf("%d", &num1);
    
    printf("Enter second number\n");
    scanf("%d", &num2);
    printf("Enter thrid number\n");
    scanf("%d", &num3);
    if(num1>num2 && num1>num3)
    {
        printf("First number  is greater than all numbers");

    }
   
    else if(num2 > num1 && num2 > num3)
    {
        printf("Second number is greater than all numbers");
    }
    
    else if (num1 == num2 && num1 == num3)
    {
        printf("All number is same value");
    }
    else 
    printf("Third number is greater than all numbers");
    
   
}