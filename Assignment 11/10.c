#include<stdio.h>
void sum(int);
int fac(int);
int main()
{
    int n,a;
    printf("Enter the number =");
    scanf("%d",&n);
    sum(n);
    // a=fac(n);
    // printf("%d",a);
    return 0;
}
int fac(int n)
{
    int i,fac=1;
    for(i=1;i<=n;i++)
        fac=fac*i;
    return fac;
}
void sum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+fac(i)/i;
    }
    printf("Total sum id %d",sum);
}