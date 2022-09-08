#include<stdio.h>
int hcf(int,int);
int main()
{
  int a,b,min,max,h;
  printf("Enter two number =");
  scanf("%d%d",&a,&b);
  if(a>b)
  {
    max=a;
    min=b;
  }
  else{
    max=b;
    min=a;
  }
  h=hcf(max,min);
  printf("HCF of two number is %d",h);
  return 0;
}
int hcf(int a,int b)
{
  if(b==0)
    return a;
  return  hcf(b,a%b);
}