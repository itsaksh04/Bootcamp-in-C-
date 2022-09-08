#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter two number = ");
    scanf("%d%d",&a,&b);
    for(i=1;i<a*b;i++)
      if ((i%a==0)&& (i%b==0))
         break;
    printf("LCM of %d and %d is %d .",a,b,i);
    return 0;
}