#include<stdio.h>
int main()
{
    int a=12,b=3,OR,AND,XOR,LS,RS;
    OR=a||b;
    AND=a&&b;
    XOR=a^b;
    LS=a<<b;
    RS=a>>b;
    printf("OR is %d\n AND is %d\n XOR is %d\n Left shift is %d\n Right shift is %d\n",OR,AND,XOR,LS,RS);
    return 0;
}
