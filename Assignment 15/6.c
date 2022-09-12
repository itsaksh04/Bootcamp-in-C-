#include<stdio.h>
void reverce(int[],int);
int main()
{
    int i,n;
    printf("How many no you want to enter =");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d number =",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    reverce(a,n);

    return 0;
}
void reverce(int a[],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}