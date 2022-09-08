#include<stdio.h>
int sumn(int);
int main()
{
    int n,s;
    printf("Enter the n natural no =");
    scanf("%d",&n);
    s=sumn(n);
    printf("Sum of %d natural no is %d",n,s);
    return 0;
}
int sumn(int n)
{
    int s;
    if(n==1)
    {
         return 1;
    }
    s=n+ sumn (n-1);
   return s;
    
}