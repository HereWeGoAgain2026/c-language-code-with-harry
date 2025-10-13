#include<stdio.h>
typedef  struct emp{
    int salary;
    float performance;
}employee;
int main (){
    employee e1;
    employee *ptr =&e1;

    ptr->salary=5000;
    ptr->performance=12.21;

    printf("The salary %d and his performance is %f",ptr->salary,ptr->performance);
    
return 0;
}