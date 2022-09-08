#include<stdio.h>
void prime(int);
int main()
{
    int p;
    printf("Enter the number to check prime no =");
    scanf("%d",&p);
    prime(p);

    return 0;
}
void prime(int p)
{
    int i;
    for(i=2;i<=p;i++)
    {
        if(p%i==0)
        {
            if(p==i)
                printf("Prime no");
            else
                printf("Not prime no");

            break;
        }
    }
}