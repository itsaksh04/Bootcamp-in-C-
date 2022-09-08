#include<stdio.h>
void odd(int);
int main()
{
   int n;
   printf("Enter the first n odd no =");
   scanf("%d",&n);
   n=n*2;
   odd(n);
   return 0;
}
void odd(int n)
{

    if(n>0)
    {
    
        odd(n-1);
        if(n%2 !=0)
           printf("%d ",n);
    }
}