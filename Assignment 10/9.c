#include<stdio.h>
void digit(char);
int main()
{
   char ch;
   printf("Enter the number = ");
   scanf("%c",&ch);
   digit(ch);
   return 0;
}
void digit(char ch)
{
    if(ch>='0' && ch<='9')
      printf("It is a digit");
    else
      printf("It is not a digit");
}