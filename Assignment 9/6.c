#include<stdio.h>
int main()
{
    int choise,year;
    printf("1. Check Leap year");
    printf("\n2. Exit");
    printf("\n Enter the choise =");
    scanf("%d",&choise);
    switch ((choise))
    {
    case 1:
        printf("Enter the Year =");
        scanf("%d",&year);
        if(year%4 ==0 || year%400==0)
            printf("\n Leap Year");
        else
            printf("\n Not Leap Year");
        break;
    
    case 2:
        break;
    }
    return 0;
}