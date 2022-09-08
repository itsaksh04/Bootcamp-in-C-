#include<stdio.h>
int permutation(int,int);
int main()
{
   int b,n,p;
   printf("Enter the value of N = ");
   scanf("%d",&n);
   printf("Enter the value of P = ");
   scanf("%d",&p);
   if(n<p)
   {
     printf("permutation not make");
     return 0;
   }
    
   b=permutation(n,p);
   printf("The permutation of %d and %d is %d ",n,p,b);
   return 0;
}
int permutation(int n,int p){
    int i,s=1,u=1,a;
    for(i=1;i<=n;i++)
     {
           s=s*i;
     }
    for(i=1;i<=n-p;i++)
     {
         u=u*i;
     }
    a=s/u;
    
    return a;
}