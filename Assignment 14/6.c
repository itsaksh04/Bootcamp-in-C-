#include<stdio.h>
void sort(int[],int);
int main()
{
   int a[10],i;
   printf("Enter the 10 value =");
   for(i=0;i<10;i++)
        scanf("%d",&a[i]);
   sort(a,10);

   return 0;
}
void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
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
    for(i=0;i<10;i++)
        printf("%d ",a[i]);

}

