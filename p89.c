#include<stdio.h>
float product(int a,float b);

int main()
{
   int num1;
   float num2;
   printf("enter two numbers:\n");
   scanf("%d %f",&num1,&num2);

   float res=product(num1,num2);
   printf("the product of two numbers is %f",res);


    return 0;
}

float product(int a, float b)
{
    float prod=a*b;
    return prod;
}
