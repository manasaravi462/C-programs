#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)>c)||((a+c)>b)||((b+c)>a))
    {
        printf("the triangle can be formed");
    }
    else if(((a+b)<=c)||((a+c)<=b)||((b+c)<=a))
    {
        printf("the triangle cannot be formed");
    }
    return 0;
}
