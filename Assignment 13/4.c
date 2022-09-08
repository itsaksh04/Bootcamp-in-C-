#include<stdio.h>
int square(int);
int main()
{
    int n,sum;
    printf("Enter the number for sum =");
    scanf("%d",&n);
    sum=square(n);
    printf("sum is %d",sum);
    return 0;
}
int square(int n)
{
    int sum=0;
    if(n>0)
    {
        sum=(n*n)+square(n-1);
    }
    return sum;
}