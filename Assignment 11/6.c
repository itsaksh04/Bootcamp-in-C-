#include<stdio.h>
void  prime_no_between(int,int);
int main()
{
    int x, y;
    printf("Enter the first value =");
    scanf("%d",&x);
    printf("Enter the second value =");
    scanf("%d",&y);
    prime_no_between(x,y);
    return 0;
}
void prime_no_between(int x,int y)
{
    int i,j;
    for(i=x;i<=y;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d ",i);
    }

}