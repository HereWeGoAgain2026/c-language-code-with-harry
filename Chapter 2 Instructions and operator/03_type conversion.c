#include<stdio.h>
int main(){
    float a = 1.5;  // if int is used then the value will be int to int so 0
    int b = 2;      
    float c = a/b; 
    printf("The value of c = %f\n" ,c );
    int d = 1.06;
    printf("The Value will be reduced to 1.06 = %d" , d);  
    return 0;
}