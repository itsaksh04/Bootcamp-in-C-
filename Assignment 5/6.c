#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter first n even number = ");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
      if(i%2==0)
        printf("%d ",i);
    return 0;
}