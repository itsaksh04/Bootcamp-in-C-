#include<stdio.h>
void natural(int);
int main()
{
   int n;
   printf("Enter n natural no in reverce order =");
   scanf("%d",&n);
   natural(n);
   return 0;
}
void natural(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        natural(n-1);
        
    }
}