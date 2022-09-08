#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter first n natural number in reverce = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      printf("%d ",n+1-i);
    return 0;
}