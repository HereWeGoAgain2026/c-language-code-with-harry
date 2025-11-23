#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main (){
     struct employee e1,e2,e3;

     printf("Enter Code of Employee \n");
     scanf("%d", &e1.code);

     printf("Enter Salary of employee \n");
     scanf("%f", &e1.salary);

     printf("Enter name of employee\n");
     scanf("%s", &e1.name);

     printf(" %d %f %s",e1.code,e1.salary,e1.name);

return 0;
}