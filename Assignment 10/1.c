#include<stdio.h>
float area(float);
int main()
{
    float r,a;
    printf("Enter the radius = ");
    scanf("%f",&r);
    a=area(r);
    printf("The area of circel is %0.2f",a);
    return 0;
}
float area (float r)
{
    return 3.14*r*r;
}