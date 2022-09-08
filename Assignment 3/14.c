#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value = ");
    scanf("%d",&a);
    if(a%7==0 || a%3==0)
       printf("No is divisible by 7 or 3");
    else
       printf("No is not divisible by 7 or 3");

    return 0;
}