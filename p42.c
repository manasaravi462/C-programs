#include<stdio.h>
int main()
{
    int p=100,r=2,t=4,com_int;
    com_int = (p*(1+(r/100))^t);
    printf("the compound interest is %d",com_int);
    return 0;

}
