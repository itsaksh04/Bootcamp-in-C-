#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b,h;
    printf("Enter the first value for H.C.F = ");
    scanf("%d",&a);
    printf("Enter the second value for H.C.F = ");
    scanf("%d",&b);
    h=hcf(a,b);
    printf("The HCF of %d and %d is %d",a,b,h);
    return 0;
}
int hcf(int a,int b)
{
    int i,min,h;
    min=a<b?a:b;
    for(i=1;i<=min;i++)
      if ((a%i==0) && (b%i==0))
           h=i;

    return h;
}