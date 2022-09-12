#include<stdio.h>
int main()
{
    int n,i,j,flag;
    printf("Enter the number to get next prime no =");
    scanf("%d",&n);
    for(i=n+1; ;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}