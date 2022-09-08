#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b,l;
    printf("Enter the first value for L.C.M = ");
    scanf("%d",&a);
    printf("Enter the second value for L.C.M = ");
    scanf("%d",&b);
    l=lcm(a,b);
    printf("The LCM of %d and %d is %d",a,b,l);
    return 0;
}
int lcm(int a,int b)
{
    int i;
    for(i=1;i<=a*b;i++)
      if (i%a==0 && i%b==0)
          return i;
}