#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,count=0,add=0,i,n;
    printf("Enter the number to check armstrong no =");
    scanf("%d",&a);
    b=a;
    c=a;
    while (a)
    {
        a=a/10;
        count++;
    }
    while (b)
    {
        n=b%10;
        add=add+pow(n,count);
        b=b/10;
    }
    
    if(add==c)
        printf("It is armstrong no");
    else
        printf("It is not Armstrong no");


    return 0;
    
}