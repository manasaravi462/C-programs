#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a=5,b=5,c=10;
    ((a>c)&&(b>c))?(printf("a and b is greater than c")):(printf("a and b is not greater than c"));
    ((a<c)&&(b<c))?(printf("a and b is smaller than c")):(printf("a and b is not smaller than c"));
    return 0;
}
