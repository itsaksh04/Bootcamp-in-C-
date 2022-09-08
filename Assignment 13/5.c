#include<stdio.h>
int sumdigit(int);
int main()
{
    int n,sum;
    printf("Enter the number for sum of digit =");
    scanf("%d",&n);
    sum=sumdigit(n);
    printf("sum of digit is %d",sum);
    return 0;
}
int sumdigit(int n)
{
    int sum=0,a;
    if(n)
    {
        a=n%10;
        sum=a+sumdigit(n/10);
    }
    return sum;
}