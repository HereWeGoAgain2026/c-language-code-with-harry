#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee e1, e2;
    e1.code =4511;
    e1.salary= 56000;
    strcpy(e1.name ,"Yash Bhamare");

    printf("%d \n%.2f\n%s",e1.code,e1.salary,e1.name);
    return 0;
}