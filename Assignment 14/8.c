// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int a[10],small,s_small,i;
    printf("Enter the 10 number =");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    small=a[0];
    s_small=0;
    for(i=1;i<10;i++)
    {
        if(small>a[i])
        {
            s_small=small;
            small=a[i];
        }
        else
        {
            if(s_small>a[i])
                s_small=a[i];
        }
        
    }
    printf("%d ",s_small);
    return 0;
}