#include<stdio.h>

int main (){
int a = 4; 
printf("%d %d %d \n", a, ++a, a++);
//6 6 4 as the compiler goes from right to left
return 0;
}