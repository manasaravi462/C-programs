#include<stdio.h>
int main()
{
    int a;
    float b;
    char str;
    long int c;
    unsigned long int d;
    printf("Enter integer: \n");
    scanf("%d",&a);
    printf("Enter float: \n");
    scanf("%f",&b);
    printf("Enter long int: \n");
    scanf("%ld",&c);
    printf("Enter unsigned long int: \n");
    scanf("%lu",&d);
    printf("Enter character: \n");
    scanf(" %c",&str);
    printf("Integer:%d\nfloat:%f\ncharacter:%c\nlong int:%ld\nunsigned:%lu\n",a,b,str,c,d);
    return 0;
}


