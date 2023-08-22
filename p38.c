#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a=5,b=5,c=10;
    (a==b)?(printf("%d == %d is true\n",a,b)):(printf("%d == %d is false\n",a,b));
    (b==c)?(printf("%d == %d is true\n",b,c)):(printf("%d == %d is false\n",b,c));
    (a==c)?(printf("%d == %d is true\n",a,c)):(printf("%d == %d is false\n",a,c));
    (a<b)?(printf("%d < %d is true\n",a,b)):(printf("%d < %d is false\n",a,b));
    (b<c)?(printf("%d < %d is true\n",b,c)):(printf("%d < %d is false\n",b,c));
    (a<c)?(printf("%d < %d is true\n",a,c)):(printf("%d < %d is false\n",a,c));
    (a>b)?(printf("%d > %d is true\n",a,b)):(printf("%d > %d is false\n",a,b));
    (b>c)?(printf("%d > %d is true\n",b,c)):(printf("%d > %d is false\n",b,c));
    (a>c)?(printf("%d > %d is true\n",a,c)):(printf("%d > %d is false\n",a,c));
    (a>=b)?(printf("%d >= %d is true\n",a,b)):(printf("%d >= %d is false\n",a,b));
    (b>=c)?(printf("%d >= %d is true\n",b,c)):(printf("%d >= %d is false\n",b,c));
    (a>=c)?(printf("%d >= %d is true\n",a,c)):(printf("%d >= %d is false\n",a,c));
    (a<=b)?(printf("%d <= %d is true\n",a,b)):(printf("%d <= %d is false\n",a,b));
    (b<=c)?(printf("%d <= %d is true\n",b,c)):(printf("%d <= %d is false\n",b,c));
    (a<=c)?(printf("%d <= %d is true\n",a,c)):(printf("%d <= %d is false\n",a,c));
    (a!=b)?(printf("%d != %d is true\n",a,b)):(printf("%d != %d is false\n",a,b));
    (b!=c)?(printf("%d != %d is true\n",b,c)):(printf("%d != %d is false\n",b,c));
    (a!=c)?(printf("%d != %d is true\n",a,c)):(printf("%d != %d is false\n",a,c));
return 0;
}
