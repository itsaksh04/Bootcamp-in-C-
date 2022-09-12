#include<stdio.h>
void sort(int[],int);
int main()
{
   int n,i;
   printf("How many no you want to enter =");
   scanf("%d",&n);
   int a[n];
   printf("Enter the %d value =",n);
   for(i=0;i<n;i++)
        scanf("%d",&a[i]);
   sort(a,n);

   return 0;
}
void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

}


