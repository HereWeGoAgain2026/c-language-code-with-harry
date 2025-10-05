#include<stdio.h>
int* sum(int, int);
int* sum(int a ,int b){
    int s=a+b;
    int* ptr = &s;
    printf("The sum of two numbers is %d\n",s);
    return ptr;
 
}
float* avg(float , float);
float* avg(float a ,float b){
    float a=(a+b)/2.0;
    float* ptr2 = &a;
    return ptr2;

    printf("The sum of two numbers is %f\n",a);
}


int main (){
    int a = 6, b=9;
    sum(a,b);
    avg(a,b);
    int* ptr;
    float* ptr2;
    
    ptr=sum(a,b);
    ptr2=avg(a,b);
     
    printf("The address of sum is %u and of average is %u",ptr,ptr2);


return 0;
}