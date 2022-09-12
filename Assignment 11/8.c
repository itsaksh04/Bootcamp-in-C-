#include<stdio.h>
int com(int,int);
int fac(int);
void pascal(int);
int main()
{
    int n;
    printf("Enter the number =");
    scanf("%d",&n);
    pascal(n);

}
int fac(int n)
{
    int i,fac=1;
    for(i=1;i<=n;i++)
        fac=fac*i;
    return fac;
}
void pascal(int n)
{
    int i,j;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%d ",com(i,j));
        }
        printf("\n");
    }
}
int com(int n,int r)
{
    return fac(n)/fac(r)*fac(n-r);
}