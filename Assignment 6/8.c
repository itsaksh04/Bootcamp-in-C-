#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter the value = ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
   {
      flag=0;
      if(n%i==0)
       {
        flag=1;
        break;
       }
   }
    if(flag==0)
       printf("Prime");
    else
       printf("Not Prime");
    return 0;
}