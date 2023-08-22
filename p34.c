#include<stdio.h>
int main()
{
    float c,f,c1,f1;
    printf("enter celsius: ");
    scanf("%f",&c);
    f1 = (c*1.8)+32;
    printf("enter fahrenheit: ");
    scanf("%f",&f);
    c1 = (f-32)/1.8;
    printf("fahrenheit is %f\n celsius is %f",f1,c1);
    return 0;
}
