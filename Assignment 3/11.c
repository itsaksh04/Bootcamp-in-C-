#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the first Subject marks =");
    scanf("%d",&a);
    printf("Enter the second Subject marks =");
    scanf("%d",&b);
    printf("Enter the third Subject marks =");
    scanf("%d",&c);
    printf("Enter the fourth Subject marks =");
    scanf("%d",&d);
    printf("Enter the fifth Subject marks =");
    scanf("%d",&e);
    if (a>=33 && b>=33 && c>=33 && d>=33 && e>=33 )
              printf("Passed");
    else
             printf("Fail");


    return 0;

}