#include<stdio.h>
int main()
{
    int a,b,i,min,co;
    printf("Enter the value of a and b = ");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for(i=1;i<=min;i++)
    {
        if((a%i==0) && (b%i==0))
            co=i;
                
    }
    if(co==1)
        printf("Co-prime");
    else
        printf("No Co-prime");
    return 0;
}
