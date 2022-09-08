#include<stdio.h>
int combination(int,int);
int main()
{
   int b,n,p;
   printf("Enter the value of N = ");
   scanf("%d",&n);
   printf("Enter the value of P = ");
   scanf("%d",&p);
   if(n<p)
   {
     printf("Combination not make");
     return 0;
   }
    
   b=combination(n,p);
   printf("The combination of %d and %d is %d ",n,p,b);
   return 0;
}
int combination(int n,int p){
    int i,s=1,u=1,m=1,c,a;
    for(i=1;i<=n;i++)
     {
           s=s*i;
     }
    for(i=1;i<=p;i++)
     {
         u=u*i;
     }
    for(i=1;i<=n-p;i++)
      {
           m=m*i;
      }
    c=u*m;
    a=s/c;
    
    return a;
}