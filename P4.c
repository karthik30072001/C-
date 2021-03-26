                /*Uppercase, Lowercase or special character*/
#include<stdio.h>
int main()
{
    char ch;
    
    printf("Enter the Character:");
    scanf("%c", &ch);
    if(ch >= 'a' && ch <= 'z')
    {
        printf("The Character %c is Lower Case Alphabet", ch);

    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("The Character %c is a Upper Case Alphabet", ch);
    }
    else
    {
        printf("The character %c is not Alphabet ", ch);
    }
return 0;
}