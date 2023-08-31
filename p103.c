#include<stdio.h>
int main()
{
    int size,count=0;
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
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("no of duplicate elements is %d\n",count);




    return 0;
}
