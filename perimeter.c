        //Program for perimeter
#include <stdio.h>
int main()
{
    int p,l,w;
    
    printf("Enter the Length of Rectangular:");
    scanf("%d",&l);
    printf("Enter the Width of Rectangular:");
    scanf("%d",&w);
    p = 2 * (l+w);
    printf("\nPerimeter of Rectangular = %d", p);
}