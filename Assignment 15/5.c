#include<stdio.h>
int a_duplicate(int[],int);
int main()
{
    int i,n,d;
    printf("How many no you want to enter =");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d number =",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    d=a_duplicate(a,n);
    printf("%d",d);
    return 0;
}
int a_duplicate(int a[],int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }
}