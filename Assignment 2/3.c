#include<stdio.h>
int main()
{
    int a=10,b=20,c;
    printf("Before swap the value of a is %d and b is %d.",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swap the value of a is %d and b is %d.",a,b);

    return 0;
}