		      /*Program for check Vowel or Consonant*/

#include<stdio.h>

int main()
{
char z;
int lower_case,upper_case;

printf("Enter an alphabet:");
scanf("%c",&z);
lower_case = (z == 'a'||z == 'e'||z == 'i'||z == 'o'||z == 'u');
upper_case = (z == 'A'||z == 'E'||z == 'I'||z == 'O'||z == 'U');
if (lower_case || upper_case)
{
printf("%c is Vowel",z);

}
else
{
printf("%c is Consonant", z);
}

return 0;
}