#include<stdio.h>
int main(){
    int n,i ;
    printf("Enter value to get multiplication table\n");
    scanf("%d",&n);
    for(int i=1; i <=10 ;i++)
    {
        printf("%d X %d = %d\n", n ,i ,n*i);
    }
    return 0;
}
