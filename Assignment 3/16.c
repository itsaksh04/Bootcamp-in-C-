#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character = ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
       printf("Lower case");
    else if(ch>='A' && ch<='Z')
       printf("Upper Case");
    else if(ch>='1' && ch<='9')
               printf("Digit");
    else
        printf("Special Character");
   
   return 0;
}