#include<stdio.h>
int factorial(int);
int main()
{
   int a,b;
   printf("Enter the No for factorial = ");
   scanf("%d",&a);
   b=factorial(a);
   printf("The Factorial of %d is %d ",a,b);
   return 0;
}
int factorial(int a){
    int i,s=1;
    for(i=1;i<=a;i++)
         s=s*i;
    return s;
}