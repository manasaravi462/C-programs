#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the coordinates:");
    scanf("%d%d",&x,&y);
    if((x>=0)&&(y>=0))
    {
        printf("the quadrant is 1");
    }
    else if((x<=0)&&(y>=0))
    {
        printf("the quadrant is 2");
    }
    else if((x<=0)&&(y<=0))
    {
        printf("the quadrant is 3");
    }
    else if((x>=0)&&(y<=0)){
        printf("the quadrant is 4");
    }return 0;
}
