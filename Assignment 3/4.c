#include<stdio.h>
int main()
{
  int a;
  printf("Enter the number");
  scanf("%d",&a);  
  if(a/2*2==a)
  {
    printf("Even Number");
  }
  else
  {
    printf("Odd Number");
  }
  return 0;
}