#include<stdio.h>
#include<stdlib.h>
int main (){
    int n;
    int* ptr;
    scanf("%d",&n);
    ptr =(int*) calloc(n , sizeof(int));

    ptr[0]=3;
    ptr[1]=6;
    ptr[2]=100;
    ptr[3]=123;
    ptr[4]=69;
    ptr[5]=90;
    ptr[6]=12;
    
    printf("%d",ptr[0]);
return 0;
}