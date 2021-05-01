#include<stdio.h>
float areac(float);
void areat(float,float);
int main(){
    float b,h,r;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    printf("\nEnter the Breath and Height of triangle:");
    scanf("%f,%f", &b,&h);
    printf("\n\nArea of circle is %.2f\n\n",areac(r));
    areat(b,h);
}
    float areac(float x){
        float area;
        area = 3.14*x*x;
        return area;

    }
    void areat(float x,float y){
        float z;
        z = 0.5*x*y;
        printf("\nArea of Triangle is %.2f\n",z);

    }

    
    

    


    



