#include<stdio.h>
int sum(int, int);
int sum(int a ,int b){
 printf("The sum of two numbers is %d\n",a+b);
}
int avg(float , float);
int avg(float a ,float b){

    printf("The sum of two numbers is %f\n",(a+b)/2.0);
}


int main (){
int a = 6, b=9;
sum(a,b);
avg(a,b);
return 0;
}