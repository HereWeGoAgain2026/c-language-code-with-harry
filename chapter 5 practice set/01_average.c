#include<stdio.h>

float avg(int a, int b, int c){
    return ((a+b+c)/3.0);
}

int main (){
    int a=3 ,b=6,c=5;
   
    printf("%f",avg(a,b,c));

return 0;
}