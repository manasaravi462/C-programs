#include<stdio.h>
#include<math.h>
#define PI 3.14
float volume(int r);
int main()
{
    int r;
    printf("enter the radius\n");
    scanf("%d",&r);

    float result=volume(r);
    printf("volume of sphere is %f",result);

    return 0;
}
float volume(int r)
{
    float vol= ((float)4/3)*PI*r*r*r;
    return vol;
}
