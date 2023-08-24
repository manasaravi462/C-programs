#include<stdio.h>
int main()
{
    int days,weeks,years,a,b;
    printf("enter the days");
    scanf("%d",&days);
    years=days/365;
    printf("the year is %d\n",years);
    a=days%365;
    weeks=a/7;
    printf("the weeks is %d\n",weeks);
    b=a%7;
    printf("the days is %d",b);
    return 0;
}
