#include <stdio.h>
int main()
{
    int n,i,max;
    printf("How many number u want to enter =");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d number =",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("The largest no is %d",max);
    return 0;
}