#include<stdio.h>
int main(){
    int i = 1, product=1;
    int n=5;
    while(i<=n){
        product *=i;
        i++;
    
    }
      printf("The value of factorial %d is %d", n , product);
    return 0;
}