#include<stdio.h>
int main()
{
    int i,n,c=0;
    printf("enter a num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
    {
        printf("n is prime\n");
    }
    else{
        printf("n is not prime\n");
    }
    return 0;
}
