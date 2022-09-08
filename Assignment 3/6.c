#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the number");
  scanf("%d%d",&a,&b);  
  if(a>b)
  {
    printf("%d is greatet than %d",a,b);
  }
  if(a<b)
  {
    printf("%d is greatet than %d",b,a);
  }
  else
  {
    printf("%d and %d is equal",a,b);
  }
  return 0;
}