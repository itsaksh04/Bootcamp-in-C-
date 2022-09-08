#include<stdio.h>
int main()
{
    int a,b,c;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n"); 
    printf("4. Divison\n");
    printf("5. Exit\n");
    printf("Enter the choise =");
    scanf("%d",&c);
    switch (c)
    {
        case 1:
            printf("Enter two value =");
            scanf("%d%d",&a,&b);
            printf("The sum of %d and %d is %d",a,b,a+b);
            break;
        case 2:
            printf("Enter two value =");
            scanf("%d%d",&a,&b);
            printf("The subtraction of %d and %d is %d",a,b,a-b);
            break;
        case 3:
            printf("Enter two value =");
            scanf("%d%d",&a,&b);
            printf("The multiplicatin of %d and %d is %d",a,b,a*b);
            break;
        case 4:
            printf("Enter two value =");
            scanf("%d%d",&a,&b);
            printf("The divison of %d and %d is %d",a,b,a/b);
            break;
        case 5:
            return 0;
            break;
    }
    return 0;

}