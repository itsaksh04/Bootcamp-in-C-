#include<stdio.h>
int square(int);
int main()
{
    int n,s;
    printf("Enter the number =");
    scanf("%d",&n);
    s=square(n);
    printf("The square of %d is %d",n,s);

    return 0;
}
int square(int n)
{
    return n*n;
}