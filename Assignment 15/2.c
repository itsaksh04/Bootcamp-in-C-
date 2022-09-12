#include <stdio.h>
int main()
{
    int n,i,small;
    printf("How many number u want to enter =");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d number =",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    small=a[0];
    for(i=1;i<n;i++)
    {
        if(small>a[i])
            small=a[i];
    }
    printf("The smallest no is %d",small);
    return 0;
}