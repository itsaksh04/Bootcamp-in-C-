#include<stdio.h>
int count(int) ;
int main()
{
    int n,c;
    printf("Enter the number =");
    scanf("%d",&n);
    c=count(n);
    printf("Total digit in %d is %d",n,c);

    return 0;
}
int count(int n)
{
    int c=0;
    if(n==0)
    {
       return c;
    }
     c++;
    c=c+count(n/10);
    return c;
}