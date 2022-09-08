#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive");
    }
    if(a<=0)
    {
        printf("Non-Positive");
    }
    return 0;
}