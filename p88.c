#include<stdio.h>
int square(int a);

int main()
{
    int num;
    printf("enter a num: \n");
    scanf("%d",&num);

    int res=square(num);
    printf("square of num is: %d",res);

    return 0;
}

int square(int a)
{
    int sqr=a*a;
    return sqr;
}
