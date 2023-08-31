#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);
int main()
{
    int a,b,res;
    char ch;
    printf("enter two numbers and char:\n");
    scanf("%d %c %d",&a,&ch,&b);
    switch(ch)
    {
        case '+': res=add(a,b);
        break;
        case '-': res=sub(a,b);
        break;
        case '*': res=mul(a,b);
        break;
        case '/': res=div(a,b);
        break;
        case '%': res=mod(a,b);
        break;
    }
    printf("result is %d\n",res);


    return 0;
}

int add(int a,int b)
{

    return a+b;
}
int sub(int a,int b)
{

    return a-b;
}
int mul(int a,int b)
{

    return a*b;
}
int div(int a,int b)
{

    return a/b;
}
int mod(int a,int b)
{

    return a%b;
}


