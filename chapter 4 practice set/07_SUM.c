#include<stdio.h>
int main(){
    int sum =0;
    for(int i=1; i<=10; i++)
    {
        sum += (9*i);
        
    }
    printf("The value of 9 table is %d\n",sum);
    return 0;
}