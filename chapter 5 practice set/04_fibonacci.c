#include<stdio.h>
int fib(int);
int fib(int n){
    if(n==1 || n==2){
        return n-1;
        
    }
    return fib(n-1) + fib (n-2);
}
int main (){ 
    int n = 4;
    printf("The value of %d in fibonacci is %d", n ,fib(n));
return 0;
}