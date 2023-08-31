#include<stdio.h>
int main()
{
    int n,a=0,b=1,nextterm;
    printf("enter num:");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        nextterm=a+b;
        a=b;
        b=nextterm;
        printf("fibinocci series: %d\n",nextterm);
    }

    return 0;
}
