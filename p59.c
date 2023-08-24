#include<stdio.h>
int main()
{

    int a,b,c,d,e,avg,total,pass,fail,aa,bb,cc,dd,ee;
    printf("enter maths marks\n");
    scanf("%d",&a);
    printf("enter science marks\n");
    scanf("%d",&b);
    printf("enter english marks\n");
    scanf("%d",&c);
    printf("enter kannada marks\n");
    scanf("%d",&d);
    printf("enter history marks\n");
    scanf("%d",&e);
    avg=(a+b+c+d+e)/5;
    printf("average marks is %d\n",avg);
    total=a+b+c+d+e;
    printf("the total marks is %d\n",total);
    if(avg>90)
    {
        printf("distinction\n");
    }
    else if((avg<=90)&&(avg>60))
    {
        printf("first class\n");
    }
    else if((avg>=60)&&(avg>=35))
    {

    printf("second class\n");
    }
    else if(avg<35)
    {

    printf("fail\n");
    }

(a>35)?(aa=1):(aa=0);
(b>35)?(bb=1):(bb=0);
(c>35)?(cc=1):(cc=0);
(d>35)?(dd=1):(dd=0);
(e>35)?(ee=1):(ee=0);
pass=aa+bb+cc+dd+ee;
fail=5-pass;
printf("passed=%d\nfailed =%d\n",pass,fail);
    return 0;
}
