#include<stdio.h>
int main()
{
    int a;
    printf("Enter the month no =");
    scanf("%d",&a);
    if(a==1)
      printf("No of Days is 31");
    else if(a==2)
            printf("No of Days is 28/29");
    else if(a==3)
            printf("No of Days is 31");
    else if(a==4)
            printf("No of Days is 30");
    else if(a==5)
            printf("No of Days is 31");
    else if(a==6)
            printf("No of Days is 30");
    else if(a==7)
            printf("No of Days is 31");
    else if(a==8)
            printf("No of Days is 31");
    else if(a==9)
            printf("No of Days is 30");
    else if(a==10)
            printf("No of Days is 31");
    else if(a==11)
            printf("No of Days is 30");
    else if(a==12)
            printf("No of Days is 31");

    return 0;
}