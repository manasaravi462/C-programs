#include<stdio.h>
#define a
#ifdef a
#define msg "hi"
#else
#define msg "bye"
#endif // a
int main()
{

    printf("%s",msg);
    return 0;
}
