#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value = ");
    scanf("%d",&a);
    if(a%2==0 && a%3==0)
       printf("No is divisible by 2 and 3");
    else
       printf("No is not divisible by 2 and 3");

    return 0;
}