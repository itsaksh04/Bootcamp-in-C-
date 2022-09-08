#include<stdio.h>
int main()
{
    int a,b,i,min,hcf;
    printf("Enter the value of a and b = ");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for(i=1;i<=min;i++)
    {
        if((a%i==0) && (b%i==0))
            hcf=i;
                
    }
    printf("HCF of %d and %d is %d ",a,b,hcf);
    return 0;
}
