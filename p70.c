#include<stdio.h>
int main()
{
    int vivo=20000,oneplus=45000,oppo=12000,iphone=100000,mi=66000,a,b;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    if((oppo>=a)&&(oppo<=b))
    {
        printf("the available brand in budget range is oppo");
    }
    if((vivo>=a)&&(vivo<=b))
    {
        printf("the available brand in budget range is vivo");
    }
    if((oneplus>=a)&&(oneplus<=b))
    {
        printf("the brand name is oneplus");
    }
    if((mi>=a)&&(mi<=b))
    {
        printf("the brand name is mi");
    }
    if((iphone>=a)&&(iphone<=b))
    {
        printf("the brand name is iphone");
    }
    return 0;
}
