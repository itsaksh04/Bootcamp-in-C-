#include<stdio.h>
void even(int);
int main()
{
   int n;
   printf("Enter the first n even no =");
   scanf("%d",&n);
   n=n*2;
   even(n);
   return 0;
}
void even(int n)
{

    if(n>0)
    {
        even(n-1);
        if(n%2 ==0)
           printf("%d ",n);
    }
}