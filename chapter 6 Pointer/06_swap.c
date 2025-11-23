#include<stdio.h>
void swap(int* a ,int* b );
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
    int a = 2 ,b =6;
    swap(&a,&b);
    printf("The value of a and b are swap %d %d",a,b);

return 0;
}