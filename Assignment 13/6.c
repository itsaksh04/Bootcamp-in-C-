#include<stdio.h>
int factorial(int);
int main()
{
    int a,fac;
    printf("Enter the number for factorial =");
    scanf("%d",&a);
    fac=factorial(a);
    printf("Factorial of %d is %d",a,fac);
    return 0;
}
int factorial(int n)
{
    int fac=1;
    if(n>0)
    {
        fac=n*factorial(n-1);
    }
    return fac;
}