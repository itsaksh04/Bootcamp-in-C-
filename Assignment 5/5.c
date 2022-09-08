#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter first n odd number in reverce order = ");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
      if(i%2)
        printf("%d ",n*2-i);
    return 0;
}