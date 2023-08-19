#include<stdio.h>
int main()
{
    int a=12;
    float b=1.78;
    char str='m';
    long int c=9999;
    unsigned long int d=98383938;
    printf("Integer size:%d\nfloat size:%f\ncharacter size:%c\nlong int size:%ld\nunsigned size:%lu\n",sizeof(a),sizeof(b),sizeof(str),sizeof(c),sizeof(d));
    return 0;
}

