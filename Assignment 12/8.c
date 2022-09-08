#include<stdio.h>
int binary(int);
int main()
{
    int a;
    printf("Enter the number =");
    scanf("%d",&a);
    binary(a);
    return 0;
}
int binary(int n)
{
    if(n==0)
      return ;
   
    binary(n/2);
    printf("%d",n%2);
}