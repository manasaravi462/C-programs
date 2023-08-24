#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values:");
    scanf("%d%d%d",&a,&b,&c);
    if((a==b)&&(b==c)&&(a==c))
    {
        printf("its equilateral\n");
    }
    else if((a==b)||(b==c)||(c==a))
    {
        printf("its isoceles\n");
    }
    else if((a!=b)&&(a!=c)||(b!=c)&&(b!=a))
    {
        printf("its scalene");
    }
    return 0;
}
