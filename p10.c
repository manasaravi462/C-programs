#include<stdio.h>
int main()
{
    char emp_id[10];
    printf("enter emp_id:");
    scanf("%s",&emp_id);
    int wrk_hrs,sal_hr;
    float salary;
    wrk_hrs=8;
    sal_hr=15000;
    salary=wrk_hrs*sal_hr;
    printf("Salary of employee of particular month is %.2f\n",salary);
    printf("employee id is %s",emp_id);
    return 0;
}
