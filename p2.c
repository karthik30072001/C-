#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a charcter:");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))

    {
        printf("%c is alphabet\n", ch);
    }
    else 
    {
        printf("%c is not a alphabet", ch);

    }
    
}