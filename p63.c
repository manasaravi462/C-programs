#include<stdio.h>
int main()
{
    int temperature;
    printf("enter the temperature:");
    scanf("%d",&temperature);
    if(temperature<0)
    {
        printf("Freezing weather\n");
    }
    else if(temperature>=0 && temperature<10)
    {
        printf("very cold weather");
    }
    else if(temperature>=10 && temperature<20)
    {
        printf("cold weather");
    }
    else if(temperature>=20 && temperature<30)
    {
        printf("normal temp");
    }
    else if(temperature>=30 && temperature<40)
    {
        printf("its hot");
    }
    else if(temperature>=40)
    {
        printf("its very hot");
    }
    return 0;

}
