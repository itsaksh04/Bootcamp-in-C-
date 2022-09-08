#include<stdio.h>
int min(int[],int);
int main()
{
   int a[10],i,m;
   printf("Enter the 10 value =");
   for(i=0;i<10;i++)
        scanf("%d",&a[i]);
   m=min(a,10);
   printf("Smallest value is %d",m);

   return 0;
}
int min(int a[],int n)
{
    int small,i;
    small=a[0];
    for(i=1;i<n;i++)
    {
        if(small>a[i])
            small=a[i];
    }
    return small;

}