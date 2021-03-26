        /*Program for Checking Upper case or Lower case*/
#include<stdio.h>

#include<ctype.h>
int main()
{
    char ch;
    printf("Enter any Character:");
    scanf("%c",&ch);
    if(isupper(ch))
    {
        printf("%c is a Upper Case\n",  ch);
    }
    else if(islower(ch))
    {
        printf("%c is a Lower Case\n", ch);
    }
    else 
    {
        printf("%c is not Alphabet\n", ch);
    }
}