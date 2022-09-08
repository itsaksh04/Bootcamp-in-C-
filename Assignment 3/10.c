#include<stdio.h>
int main()
{
  int cp,sp,p,l;
  printf("Enter the cost price =");
  scanf("%d",&cp); 
  printf("Enter the selling price =");
  scanf("%d",&sp); 
  if(sp>cp)
  {
    p=(sp-cp)*100/cp;
    printf("The profit Percentage is %d",p);
  }
  else
  {
    l=(cp-sp)*100/cp;
    printf("\nThe loss Percentage is %d",l);
  }
  
  

  return 0;
}
  