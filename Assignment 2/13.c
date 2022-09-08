#include<stdio.h>
int main()
{
    int a,b,x,rev=0;
    printf("Enter the three digit number =");
    scanf("%d",&a);
    b=a;
    while(b)
    {
        x=b%10;
        rev=rev*10+x;
        b=b/10;
    }
    printf("Reverce value of %d is %d",a,rev);
    return 0;
}