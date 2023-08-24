#include<stdio.h>
int main()
{
    int vivo=20000,oneplus=45000,oppo=12000,iphone=100000,mi=66000,a,b;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    if((a>=10000)&&(b<15000))
    {
        printf("the available brand in budget range is oppo");
    }
    else if((a>=15000)&&(b<30000))
    {
        printf("the available brand in budget range is vivo");
    }
    else if((a>=30000)&&(b<50000))
    {
        printf("the brand name is oneplus");
    }
    else if((a>=50000)&&(b<70000))
    {
        printf("the brand name is mi");
    }
    else if((a>=70000)&&(b<100000))
    {
        printf("the brand name is iphone");
    }
    return 0;
}
