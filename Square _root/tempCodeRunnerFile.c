#include<stdio.h>
#include<math.h>
int main()
{
    double num,root;
    printf("Enter any number to find square root:\n");
    scanf("%lf",&num);
    root = sqrt(num);
    printf("\nSquare root of the %.2lf is %.2lf", num, root);
    return 0;
}