#include<stdio.h>
int even(int);
int main()
{
    int n,o;
    printf("Enter the n value =");
    scanf("%d",&n);
    o=even(n*2);
    printf("Sum of %d even number is %d",n,o);
    return 0;
}
int even(int n)
{
    int sum=0;
    if(n>0)
    {
        sum=even(n-1);
        if(n%2==0)
        {
            sum=sum+n;
        }
    }

    return sum;
}
