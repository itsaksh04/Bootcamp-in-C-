#include<stdio.h>
int main()
{
    int choise,a,b,c;
    printf("1. Check Isosceles Triangle");
    printf("\n2. Check Right angled  Triangle");
    printf("\n3. Check Equilateral Triangle");
    printf("\n4. Exit");
    printf("\n Enter the Choise =");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1:
            printf("Enter the side of tringle =");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b || b==c || c==a)
                printf("Isosceles Triangle");
            break;
        case 2:
             printf("Enter the side of tringle =");
            scanf("%d%d%d",&a,&b,&c);
            if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (c*c)+(b*b)==(a*a))
                printf("Rigt angle Triangle");
            break;
        case 3:
             printf("Enter the side of tringle =");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b && b==c)
                printf("Equilateral Triangle");
            break;
        case 4:
            break;
            
    }
    return 0;

}