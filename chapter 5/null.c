#include<stdio.h>
int divide(int ,int );
int divide (int x, int y) {
    return x/y;
}
int main(){
    float a,b,c;
    printf("Enter value to get division of number\n");
    scanf("%f",a);

    printf("b\n");
    scanf("%f",b);

    c = divide(a,b);
    printf("%f",c); 

    return 0;
}