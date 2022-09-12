#include<stdio.h>
int prime(int);
int main()
{
    int p, a;
    printf("Enter the number to check prime no =");
    scanf("%d",&p);
    a=prime(p);
    if(a==1)
        printf("Prime no");
    else
        printf("Not prime no");
    return 0;
}
int prime (int p)
{
    int i;
    for(i=2;i<=p;i++)
    {
        if(p%i==0)
        {
            if(p==i)
                return 1;
            else
                return 0;

            break;
        }
    }
    
}