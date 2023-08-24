#include<stdio.h>
int main()
{
    int c;
    int a=9,b=1;
    printf("enter the c");
    scanf("%d",&c);
    switch(c)
    {
        case 1:printf("addition of %d and %d is %d",a,b,(a+b));
        break;
        case 2:printf("subtraction of %d and %d is %d",a,b,(a-b));
        break;
        case 3:printf("multiplication of %d and %d is %d",a,b,(a*b));
        break;
        case 4:printf("divison of %d and %d is %d",a,b,(a/b));
        break;
        case 5:printf("modulus of %d and %d is %d",a,b,(a%b));
        break;
    }
    return 0;
}
