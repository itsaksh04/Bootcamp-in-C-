#include<stdio.h>
int main()
{
    int a,b,count=0;
    printf("Enter the number =");
    scanf("%d",&a);
    while (a)
    {
        b=a&1;
        count++;
        if(b==1)
        {
            printf("%d",b);
            break;
        }
        a=a>>1;
    }
    return 0;

}