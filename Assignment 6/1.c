#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the n natural number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       sum+=i;
    printf("The sum of %d natural number is %d ",n,sum);
    return 0;
}