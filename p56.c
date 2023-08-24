#include<stdio.h>
int main()
{
    int a;
    printf("enter a num:");
    scanf("%d",&a);
    if(a=0)
    {
        printf("the num is zero\n");
    }
    else if(a>0)
    {
        printf("the num is positive\n");
    }
    else{
        printf("the num is negative\n");
    }
    return 0;
}
