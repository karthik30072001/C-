        /*To check Number is Positive or Negative*/
#include<stdio.h>
int main()
{
    double num;
    printf("Enter any Number:");
    scanf("%lf", &num);
    if(num < 0)
    {
        printf("%lf is Negative Number\n", num);

    }
    else if(num > 0)
    {
        printf("%lf is Postive Number\n", num);
    }
    else{
        printf("The Number is 0");
    }
}