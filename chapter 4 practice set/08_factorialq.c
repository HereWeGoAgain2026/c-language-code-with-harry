#include<stdio.h>
int main(){
    int product = 1;
    int n = 2;
    for(int i = 1;  i<=n; i++){
        product *=i;
    }
    printf( "The factorial of given number is %d\n" ,product);
    return 0;
}