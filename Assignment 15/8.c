#include<stdio.h>
void unique(int[],int);
int main()
{
    int i,n,c;
    printf("How many no you want to enter =");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d number =",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    unique(a,n);

    return 0;
}
void unique(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+0;j<n;j++)
        {
           if(a[i]==a[j])
           {

           }
           else
           {
            printf("%d ",a[i]);
           } 
        }
    }
}