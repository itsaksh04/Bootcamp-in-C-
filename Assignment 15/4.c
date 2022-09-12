#include<stdio.h>
void left_rotate(int[],int,int);
void right_rotate(int[],int,int);
int main()
{
    int n,i,r,c;
    printf("How many no you want to enter =");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d number =",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nHow may you want to rotate =");
    scanf("%d",&r);
    printf("1.Left Rotate\n");
    printf("2. Right Rotate\n");
    printf("Enter the Choise =");
    scanf("%d",&c);
    if(c==1)
      left_rotate(a,n,r);
    else
         right_rotate(a,n,r);
    
    return 0;
}
void left_rotate(int a[],int n,int r)
{
    int i,temp;
    while (r)
    {
        temp=a[n-1];
        for(i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
        r--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void right_rotate(int a[],int n,int r)
{
    int i,temp;
    
    while (r)
    {
        temp=a[0];
        for(i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
        r--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}