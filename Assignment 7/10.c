#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,n,sum;
    for(i=1;i<=1000;i++)
    {
        a=i;
        sum=0;
        while (a)
        {
            n=a%10;
            sum=sum+(n*n*n);
            a=a/10;
        }
        if(sum==i)
            printf("%d ",sum);
        
    }
    return 0;
    
}