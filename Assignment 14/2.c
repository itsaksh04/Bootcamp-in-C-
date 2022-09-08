#include<stdio.h>
float avg(int[],int);
int main()
{
  int a[10],i;
  float total;
  printf("Enter the 10 value for avg=");
  for(i=0;i<10;i++)
     scanf("%d",&a[i]);
  total=avg(a,10);
  printf("Average is %0.2f",total);
  return 0;
}
float avg(int a[],int n)
{
    int i;
    float avg=0;
    for(i=0;i<n;i++)
        avg=avg+a[i];
    return avg/n;
}