#include<stdio.h>
int main()
{
    int a=1,b=0,c=0,n,i,count=0;
    printf("Enter the value = ");
    
    scanf("%d",&n);
    for(i=1;c<n;i++)
    {
        c=a+b;
        if(c==n)
        {
           count++;
           break;
        }
           
        a=b;
        b=c;
    }
    if(count==1)
       printf("Number is Fibonacci");
    else
       printf("Number is not Fibonacci");
    
    return 0;
}
