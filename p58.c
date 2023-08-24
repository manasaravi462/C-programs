#include<stdio.h>
int main()
{
    int year,a,b;
    printf("enter the year:");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("it is a leap year\n");
        a=year+4;
        printf("the next leap year is %d\n",a);
    }
    else
    {
        printf("its not a leap year\n");
        b=year%4;
        printf("the next leap year is %d\n",((year-b)+4));
    }
    return 0;
}
