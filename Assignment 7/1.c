#include<stdio.h>
int main()
{
    int a=1,b=0,c,n,i;
    printf("Enter the value = ");
    
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d ",c);
    return 0;
}
