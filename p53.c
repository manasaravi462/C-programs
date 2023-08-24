#include<stdio.h>
int main()
{
    int a=2,b=3,c=4,d;
    d = a>b?(a>c ? a : c):(b>c ? b : c);
    printf("the biggest num is %d",d);
    return 0;
}
