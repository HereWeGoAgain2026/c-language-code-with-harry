#include<stdio.h>
float force(float);
float force(float mass){
    return mass*9.8;
}
int main (){
    float mass = 12;
    printf("The value of force is %f",force(mass));

return 0;
}