#include<stdio.h>
int main()
{
    int cust_id;
    char name =" ";
    float unit,total,bill;
    printf("enter the cust_id, name and unit:");
    scanf("%d %s %f",&cust_id,&name,&unit);
    if(unit<83.33)
    {
        printf("the minimum bill is 100/-");
    }
    else if(unit>=83.33 && unit<=199)
    {
        bill=unit*1.20;
        printf("the bill is %f\n",bill);
    }
    else if(unit>=200 && unit<400)
    {
        bill=unit*1.50;
        printf("the bill is %f\n",bill);
    }
    else if(unit>=400 && unit<600)
    {
        bill=unit*1.80;
        printf("the bill is %f\n",bill);
    }
    else if(unit>=600);
    {
        bill=unit*2.00;
        printf("the bill is %f\n",bill);
    }
    if(bill>400)
    {
        total=(bill*0.15)+bill;
        printf("the total amount is %f\n",total);
    }
    return 0;

}
