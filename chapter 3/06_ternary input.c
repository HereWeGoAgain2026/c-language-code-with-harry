#include<stdio.h>
int main(){
     int a,b;
     printf("Put value of a  \n",a);
     scanf("%f", &a);
     printf("Put value of b \n" , b);
     scanf("%f", &b);
     a>b?printf("a is greater"):printf("b is greater");

    return 0;
}