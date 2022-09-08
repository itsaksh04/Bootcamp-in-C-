#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of tringle =");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && c+b>a)
        printf("Tringle is valid");
    else
       printf("Tringle is not valid");

    return 0;
}