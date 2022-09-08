#include<stdio.h>
int main()
{
    int a,b,rev=0,d,i;
    printf("Enter the number = ");
    scanf("%d",&a);
    d=a;
    while (d)
    {
        b=d%10;
        rev=rev*10+b;
        d=d/10;
    }
    printf("The reverce value of %d is %d .",a,rev);
    return 0;
    
}