#include<stdio.h>
int main()
{
    int n,cout=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    while (n)
    {
        n/=10;
        cout++;
    }
    
    printf("Number of digit is  %d ",cout);
    return 0;
}