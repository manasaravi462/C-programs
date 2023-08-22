#include<stdio.h>
int main()
{
    int a=8,b=4;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped numbers a=%d , b=%d",a,b);
    return 0;
}
