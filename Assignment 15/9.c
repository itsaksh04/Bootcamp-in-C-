#include<stdio.h>
void merge_d(int[],int[],int[],int);
int main()
{
    int i,n;
    printf("How many no you want to enter =");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d number =",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int b[n];
    printf("Enter the %d number =",n);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    int c[n*2];
    merge_d(a,n);
    return 0;
}
void merge_d(int a[],int b[],int c[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        
    }
}