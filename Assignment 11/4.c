#include<stdio.h>
int nextPrime(int);
int main()
{
    int n,p;
    printf("Enter the number to get next prime no =");
    scanf("%d",&n);
    p=nextPrime(n);
    printf("The next prime number is %d",p);
    return 0;
}
int nextPrime(int n)
{
    int i,j;
    for(i=n+1; ;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
           return i;
    }
}