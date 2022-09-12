#include<stdio.h>
void n_fibonacci(int);
int main()
{
    int n;
    printf("Enter the number to get n fibonacci number =");
    scanf("%d",&n);
    n_fibonacci(n);
    return 0;
}
void n_fibonacci(int n)
{
    int a=1,b=0,c;
    while (n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
    
}