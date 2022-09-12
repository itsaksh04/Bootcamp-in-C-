#include <stdio.h>
int main()
{
    int a[10],i;
    printf("Enter the 10 number =");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=10-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}