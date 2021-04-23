#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);
    if(num1>num2)
    {
        printf("%d is greater than %d",num1,num2);

    }
   
    else if(num2 > num1){
        printf("%d is greater than %d",num2,num1);
    }
    else
    printf("These two number is equal together");

}