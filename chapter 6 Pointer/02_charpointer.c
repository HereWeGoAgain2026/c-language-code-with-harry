#include<stdio.h>
int main (){
    char i ='A';
    char*j = &i;

    printf("The value at address of j is %u\n",*(&i));

    float c = 562.12;
    float* k = &c;

    printf("The value at address of k is %u\n",*(&c));

   
  

return 0;
}