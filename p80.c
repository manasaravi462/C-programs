#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("enter a num:");
    scanf("%d",&n);
    if(n<0)
        printf("error");
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d:%d\n",n,fact);
    return 0;
}
