#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number to check even or odd =");
    scanf("%d",&a);
    if(a&1==1)
      printf("odd");
    else
      printf("Even");
    
    return 0;
}