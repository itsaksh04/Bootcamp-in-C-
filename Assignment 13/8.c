#include<stdio.h>
void fibo(int n,int a,int b);
int main()
{
    int n,a=1,b=0;
    printf("Enter the first nth term =");
    scanf("%d",&n);
    fibo(n,a,b);

    return 0;
}
void fibo(int n,int a,int b)
{
    int i,c;
    if(n>0)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
        fibo(n,a,b);
    }
}