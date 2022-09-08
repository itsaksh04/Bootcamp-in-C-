#include<stdio.h>
void even(int);
int main()
{
   int n;
   printf("Enter the first n even no in reverce order =");
   scanf("%d",&n);
   n=n*2;
   even(n);
   return 0;
}
void even(int n)
{

    if(n>0)
    {
        if(n%2 ==0)
           printf("%d ",n);
        even(n-1);
    }
}