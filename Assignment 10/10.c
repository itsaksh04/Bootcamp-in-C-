#include<stdio.h>
void pfactor(int);
int main()
{
    int a;
    printf("Enter the number =");
    scanf("%d",&a);
    pfactor(a);

    return 0;
}
void pfactor(int a)
{
    int i;
    for(i=2;a>1;i++)
    {
        while (a%i==0)
        {
            printf("%d ",i);
             a=a/i;
        }
      
    }
}