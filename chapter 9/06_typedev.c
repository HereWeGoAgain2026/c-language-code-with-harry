#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[10];
}Emp;
int main (){
   Emp e1;
   e1.code= 4511;
   e1.salary=1232.23;
   strcpy(e1.name, "Yash");

   printf("%d \n%.2f\n%s",e1.code,e1.salary,e1.name);
return 0;
}