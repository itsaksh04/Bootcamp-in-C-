// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int a[10],max,s_max,i;
    printf("Enter the 10 number =");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    max=a[0];
    s_max=0;
    for(i=1;i<10;i++)
    {
        if(max<a[i])
        {
            s_max=max;
            max=a[i];
        }
        else
        {
            if(s_max<a[i])
                s_max=a[i];
        }
        
    }
    printf("%d ",s_max);
    return 0;
}