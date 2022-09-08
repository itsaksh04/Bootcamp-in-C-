#include<stdio.h>
int power(int,int);
int main()
{
    int a,b,p;
    printf("Enter the cofficent =");
    scanf("%d",&a);
    printf("Enter the power =");
    scanf("%d",&b);
    p=power(a,b);
    printf("The power is %d",p);
    return 0;
}
int power(int a,int b)
{
    int p=1;
    if(b==0)
    {
        return p;
    }
    b--;
    p =a*power(a,b);
    return p;
}