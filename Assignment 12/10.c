#include<stdio.h>
int reverce(int);
int main()
{
    int a,rev;
    printf("Enter the number =");
    scanf("%d",&a);
    rev=reverce(a);
    printf("%d",rev);
    return 0;
}
int reverce(int n)
{
    int rem,sum=0;
    if(n)
    {
        rem=n%10;
        sum=sum*10+rem; 
        reverce(n/10);
        
    }
    else 
       return sum;
    return sum;
}