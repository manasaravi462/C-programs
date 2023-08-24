#include<stdio.h>
int main()
{
    int side,interior_angle;
    printf("enter the number of sides:");
    scanf("%d",&side);
    interior_angle=(side-2)*180;
    printf("the interior angle is %d:",interior_angle);
    return 0;
}
