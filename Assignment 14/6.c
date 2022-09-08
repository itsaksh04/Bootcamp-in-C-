#include<stdio.h>
void swap(int[],int);
int main()
{
   int a[10],i;
   printf("Enter the 10 value =");
   for(i=0;i<10;i++)
        scanf("%d",&a[i]);
   swap(a,10);

   return 0;
}
void swap(int a[],int n)
{
    int i,j,t,size;
    size=n;
    // for(j=0;j<n;j++)
    // {
    //     if(a[j]>a[j+1])
    //     {
    //         t=a[j+1];
    //         a[j+1]=a[j];
    //         a[j]=t;
    //     }
        
    // }
    for(i=0;i<size;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
             }
        }
        n--;
    }
    for(j=0;j<size;j++)
    {
        printf("%d ",a[j]);
    }

}

