#include<stdio.h>
void multi(); 
void line();
int main(){
     multi();
}
void line(){
    int i;
    for(i=0;i<=40;i++){
        printf("~");
    }
}
void multi(){
    int t,h,i;
    printf("Enter the table you want:");
    scanf("%d", &t);
    printf("How many terms you want:");
    scanf("%d",&h);
    for(i=1;i<=h;i++){
        printf("\n%d x %d = %d", i,t,i*t);
        printf("\n");
        line();
    }
}