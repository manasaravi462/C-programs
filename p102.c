#include<stdio.h>
#include<math.h>
int main()
{
    int size,sum=0;
    printf("enter the size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    printf("the sum of the array elements is %d\n",sum);
    int avg = sum/size;
    printf("the average is %d\n",avg);
    return 0;
}


