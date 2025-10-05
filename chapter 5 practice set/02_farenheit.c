#include<stdio.h>
float celsius(float);
float celsius(float c){
    return ((9*c)/5) + 32;
}

int main (){
float c=120;

printf("The value from celsius to farenheit is %f", celsius(c));
return 0;
}