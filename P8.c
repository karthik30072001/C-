                /*Find a LCM of Two numbers*/

#include <stdio.h>
int main()
{
    int n1,n2,min;
    printf("Enter the two Positive interger:");
    scanf("%d %d", &n1,&n2);
    min = (n1 > n2) ? n1 : n2;
    while(1){
        if(min % n1 == 0 && min % n2 == 0)
        {
            printf("The LCM of %d and %d is %d\n", n1,n2,min);
            break;
        }
        ++min;
    }
    return 0;
}