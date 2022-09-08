#include<stdio.h>
void oddno(int);
int main()
{
   int a;
   printf("Enter the n odd no = ");
   scanf("%d",&a);
   oddno(a);

   return 0;
}
void oddno(int a){
    int i;
    for(i=1;i<=a*2;i++)
         if(i%2)
            printf("%d ",i);
}