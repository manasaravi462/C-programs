#include<stdio.h>
int arr(int b[]);
int two_arr(int rows,int col,int c[rows][col]);
int size;
int main()
{
    int rows,col;
    printf("enter the size of elements\n");
    scanf("%d",&size);
    int arr1[size];
    printf("enter elemnts\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr1[i]);
    }

    arr(arr1);
    printf("enter the size of elements\n");
    scanf("%d%d",&rows,&col);
    int arr2[rows][col];
    printf("enter elemnts\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0;j<col;j++)
        {
           scanf("%d",&arr2[i][j]);
        }

    }
    two_arr(rows,col,arr2);
    return 0;
}
int arr(int b[])
{

    for(int i=0; i<size; i++)
    {

        printf("the elements are %d\n",b[i]);
    }
}
int two_arr(int rows,int col,int c[rows][col])
{

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("the elements are %d\n",c[i][j]);
        }printf("\n");
    }printf("\n");
}
