#include<stdio.h>
int main()
{
    //here i'am going to declare three variables

    int angle1,angle2,angle3;
    printf("Enter the known two angles:\n");
    scanf("%d,%d", &angle1,&angle2);
    //and we know that sum of three angle is 180
    
    angle3 = 180- angle1- angle2;
    printf("Third angle is %d\n", angle3);
    return 0;


}