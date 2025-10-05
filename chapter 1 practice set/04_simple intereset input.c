#include<stdio.h>
int main(){
    float p ,r ,t;
    printf("Value of period ");
    scanf("%f",&p);

    printf("Value of r is ");
    scanf("%f" , &r);
    
    printf("Value of t is ");
    scanf("%f",&t);
    printf("Simple intereset is %f", ((p*r*t)/100));

    return 0;
}