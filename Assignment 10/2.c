#include<stdio.h>
float si(float,float,int);
int main()
{
    float a,p,r;
    int t;
    printf("Enter the Principal amount = ");
    scanf("%f",&p);
    printf("Enter the  Annual Rate = ");
    scanf("%f",&r);
    printf("Enter the Time = ");
    scanf("%d",&t);
    a=si(p,r,t);
    printf("The Simple interest is %0.2f",a);
    return 0;
}
float si (float p ,float r, int t)
{
    float a;
    a=p*(1+r*t);
    return a;
}