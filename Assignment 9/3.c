#include<stdio.h>
int main()
{
    int a;
    printf("Enter the day number =");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
            printf("Happy Monday");
            break;
        case 2:
            printf("Happy Tuesday");
            break;
        case 3:
            printf("Happy Wednesday");
            break;
        case 4:
            printf("Happy Thrusday");
            break;
        case 5:
            printf("Happy Friday");
            break;
        case 6:
            printf("Happy Saturday");
            break;
        case 7:
            printf("Happy Sunday");
            break;
    
    }
    return 0;
}