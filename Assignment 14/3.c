#include<stdio.h>
int oddsum(int[],int);
int evensum(int[],int);
int main()
{
  int a[10],i,even,odd;
  printf("Enter the 10 value for sum of even and odd=");
  for(i=0;i<10;i++)
     scanf("%d",&a[i]);
  even=evensum(a,10);
  odd=oddsum(a,10);
  printf("sum of odd no is %d",odd);
  printf("\n");
  printf("sum of even no is %d",even);  
  return 0;
}
int oddsum(int a[],int n)
{
    int i,odd=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2)
            odd=odd+a[i];
    }
    return odd;
}
int evensum(int a[],int n)
{
    int i,even=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even=even+a[i];
    }
    return even;
}