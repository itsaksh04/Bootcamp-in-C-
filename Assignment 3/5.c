#include<stdio.h>
int main()
{
  int a,count=0,b;
  printf("Enter the number");
  scanf("%d",&a);  
  b=a;
  while (b)
  {
    b=b/10;
    count++;
  }
  if(count==3)
  {
    printf("%d is a three digit number",a);
  }
  else
  {
    printf("%d is not a three digit number",a);
  }
  return 0;
}