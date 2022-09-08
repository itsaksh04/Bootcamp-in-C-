#include<stdio.h>
int check (int);
int main()
{
    int a,b;
    printf("Enter the number = ");
    scanf("%d",&a);
    b=check(a);
    if (b)
      printf("Even Number");
    else
      printf("Odd Number");

    return 0;

}
int check(int a)
{
    if(a%2==0)
       return 1;
    else
       return 0;
}