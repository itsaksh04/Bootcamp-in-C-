#include<stdio.h>
int max(int[],int);
int main()
{
   int a[10],i,m;
   printf("Enter the 10 value =");
   for(i=0;i<10;i++)
        scanf("%d",&a[i]);
   m=max(a,10);
   printf("Largest value is %d",m);

   return 0;
}
int max(int a[],int n)
{
    int larg,i;
    larg=a[0];
    for(i=1;i<n;i++)
    {
        if(larg>a[i])
            continue;
        else
            larg=a[i];
    }
    return larg;

}