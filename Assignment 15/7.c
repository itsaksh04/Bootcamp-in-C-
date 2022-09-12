#include<stdio.h>
int d_count(int[],int);
int main()
{
    int i,n,c;
    printf("How many no you want to enter =");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d number =",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    c=d_count(a,n);
    printf("%d",c);
    return 0;
}
int d_count(int a[],int n)
{
    int i,j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
            }
        }
    }
    return count;
}