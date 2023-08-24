#include<stdio.h>
int main()
{
    char x1,y1;
    printf("enter the character:");
    scanf("%c %c",&x1,&y1);
    if((x1==y1)||(isupper(x1)==islower(y1))||(islower(x1)==isupper(y1)))
    {
        printf("they are equal");
    }
    else{
        printf("they are not equal");
    }
    return 0;
}
