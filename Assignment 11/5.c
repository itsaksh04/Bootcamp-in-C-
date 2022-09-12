#include<stdio.h>
void n_Prime_no(int);
int main()
{
    int n;
    printf("Enter the number to get n prime no =");
    scanf("%d",&n);
    n_Prime_no(n);
    return 0;
}
void n_Prime_no(int n)
{
    int i,j,count=0;
    for(i=2; ;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
             printf("%d ",i);
             count++;
        }
        if(count==n)
            break;
    }
}