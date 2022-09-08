#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the n odd natural number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       if(i%2)
         sum+=i;
    printf("The sum of %d odd natural number is %d ",n,sum);
    return 0;
}