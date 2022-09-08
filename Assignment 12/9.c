#include<stdio.h>
int octal(int);
int main()
{
    int a;
    printf("Enter the number =");
    scanf("%d",&a);
    octal(a);
    return 0;
}
int octal(int n)
{
    if(n==0)
      return ;
   
    octal(n/8);
    printf("%d",n%8);
}