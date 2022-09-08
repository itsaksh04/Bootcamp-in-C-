#include<stdio.h>
void naturalno(int);
int main()
{
   int a;
   printf("Enter the n natural no = ");
   scanf("%d",&a);
   naturalno(a);

   return 0;
}
void naturalno(int a){
    int i;
    for(i=1;i<=a;i++)
         printf("%d ",i);
}