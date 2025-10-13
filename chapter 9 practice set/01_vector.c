#include<stdio.h>

typedef struct vector{
    int i;
    int j;
}Vec;
int main (){
    Vec v = {1,2};
    printf("The value of vector %di + %dj",v.i,v.j);


    
return 0;
}