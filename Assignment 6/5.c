#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the n natural number for cube sum = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       sum+=i*i*i;
    printf("The sum of Cube of %d natural number is %d ",n,sum);
    return 0;
}