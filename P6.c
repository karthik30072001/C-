                    /*To check a number is Odd or Even*/
#include<stdio.h>
int main()
{
    long int num;
    printf("Enter any Number:\n");
    scanf("%ld", &num);
    if ( num % 2 == 0)
    {
        printf("The Number is Even\n");
    }
    else
    {
        printf("The Number is Odd\n");

    }
    return 0;
}