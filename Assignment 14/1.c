#include<stdio.h>
int sumno(int[],int);
int main()
{
  int a[10],i,total;
  printf("Enter the 10 value for sum=");
  for(i=0;i<10;i++)
     scanf("%d",&a[i]);
  total=sumno(a,10);
  printf("Total is %d",total);
  return 0;
}
int sumno(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+a[i];
    return sum;
}