#include<stdio.h>
int odd(int);
int main()
{
    int n,o;
    printf("Enter the n value =");
    scanf("%d",&n);
    o=odd(n*2);
    printf("Sum of %d odd number is %d",n,o);
    return 0;
}
int odd(int n)
{
    int sum=0;
    if(n>0)
    {
        sum=odd(n-1);
        if(n%2)
        {
            sum=sum+n;
        }
    }

    return sum;
}
