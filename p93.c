#include<stdio.h>
int factorial(int num);
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);

    int fact=factorial(num);
    printf("factorial is %d",fact);



    return 0;
}
int factorial(int num)
{
    if(num==0)
        return 1;
    else
        return num * factorial(num-1);
}
