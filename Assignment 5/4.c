#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter first n odd number = ");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
      if(i%2)
        printf("%d ",i);
    return 0;
}