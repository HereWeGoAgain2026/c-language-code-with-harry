#include<stdio.h>
int main(){
    int n,i;
    printf("Reversed order of enter value of n \n");
    scanf("%d",&n);
    for(i=10;i;i--)
    {
    printf("%d x %d = %d \n",n,i,n*i);
    }
    return 0;
}