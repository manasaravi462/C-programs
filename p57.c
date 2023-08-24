#include<stdio.h>
int main()
{
    char x;
    printf("enter char:");
    scanf("%c",&x);
    if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u'))
    {
        printf("the given is vowel");
    }
    else{
        printf("the given is not vowel");
    }
    return 0;
}
