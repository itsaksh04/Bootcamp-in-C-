#include<stdio.h>
int main()
{
    int i,sum=0,a,b;;
    printf("Enter the number = ");
    scanf("%d",&a);
    b=a;
    while (a)
    {
        i=a%10;
        sum+=i;
        a=a/10;
    }
    printf("Sum of %d is %d",b,sum);
    return 0;
}