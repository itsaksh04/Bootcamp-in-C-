#include<stdio.h>
int main()
{
    int a;
    printf("Enter the month no =");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
            printf("31 days in that month");
            break;
        case 2:
            printf("28/29 days in that month");
            break;
        case 3:
            printf("31 days in that month");
            break;
        case 4:
            printf("30 days in that month");
            break;
        case 5:
            printf("31 days in that month");
            break;
        case 6:
            printf("30 days in that month");
            break;
        case 7:
            printf("31 days in that month");
            break;
        case 8:
            printf("31 days in that month");
            break;
        case 9:
            printf("30 days in that month");
            break;
        case 10:
            printf("31 days in that month");
            break;
        case 11:
            printf("30 days in that month");
            break;
        case 12:
            printf("31 days in that month");
            break;
        default:
            printf("Enter wrong month");
            break;
        }

    return 0;
}