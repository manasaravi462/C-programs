#include<stdio.h>
int main ()
{
    int number,copy_no,zeros=0,ones=0;
    printf("Enter the decimal number N:");
    scanf("%d",&number);
    copy_no=number;
    while(number>0)
    {
        if (number%2==0)
        {
        zeros++;
        }
        else if (number%2==1)
        {
        ones++;
        }
        number=number/2;

    }
    printf("The number of zeros and ones in %d is %d and %d",copy_no,zeros,ones);
    return 0;
}
