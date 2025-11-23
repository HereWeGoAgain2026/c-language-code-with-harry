#include<stdio.h>
#include<stdlib.h>
int main (){
    float n = 5;
    float* ptr;
    ptr =(float*) malloc(n * sizeof(int));

    ptr[0]=3.122;
    ptr[1]=123.2;
    ptr[2]=69.43;
    ptr[3]=90.12;
    ptr[4]=12.90;

    printf("%.2f\n",ptr[0]);
    printf("%.2f\n",ptr[1]);
    printf("%.2f\n",ptr[2]);
    printf("%.2f\n",ptr[3]);
    printf("%.2f\n",ptr[4]);
return 0;
}