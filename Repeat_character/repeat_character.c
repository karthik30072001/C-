#include<stdio.h>
void repeatchar(char,int);
int main()
{
    char c;
    int t;
    printf("Enter the character do you want to print:");
    scanf("%c", &c);
    printf("Enter how many times do you want to printt:");
    scanf("%d", &t);
    repeatchar(c,t);
    printf("\nWelcome to C programming\n");
    repeatchar(c,t);
    printf("\nYou can acheive greatest steps Karthik!\n");
    repeatchar(c,t);
    printf("\n");

}
void repeatchar(char l,int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%c",l);
    }
}