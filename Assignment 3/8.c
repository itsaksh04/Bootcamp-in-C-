#include<stdio.h>
int main()
{
    int y,i;
    printf("Enter the year = ");
    scanf("%d",&y);
    if(y%4==0 || y%400==0)
       printf("%d is Leap Year",y);
    else
       printf("%d is not a Leap Year",y);

    return 0;
}