#include <stdio.h>
int main()
{
    int a[10],i,b[10];
    printf("Enter the 10 number =");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<10;i++)
        printf("%d ",b[i]);
    return 0;
}