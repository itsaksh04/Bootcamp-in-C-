// Dout ha question ma real and distint ma
#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("Enter the number");
  scanf("%d%d%d",&a,&b,&c); 
  d=(b*b)-(4*a*c);
  if(d>0)
  {
    printf("Real and Distint");
  }
  if(d<0)
  {
    printf("Imaginary");

  }
  if(d == 0)
  {
    printf("Real and Equal");
  }
  return 0;
}

