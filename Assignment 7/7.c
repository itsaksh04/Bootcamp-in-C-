#include<stdio.h>
int main()
{
    int i,j,n,a;
    printf("Enter the two number to print all prime no in between =");
    scanf("%d%d",&a,&n);
    for(i=a;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                if(i==j)
                    printf("%d ",i);
                else
                    break;
            }
        }
    }

    return 0;
}