#include<stdio.h>
int  sub (int ,int , int);
int  sub (int x, int y, int z){
    return x-y-z;
}
int main(){
    int a,b,c,d;
    printf("Value of a\n");
    scanf("%d",&a);

    printf("Value of b\n");
    scanf("%d",&b);

    printf("Value of c\n");
    scanf("%d",&c);

    d = sub(a,b,c);
    printf("%d",d);

return 0;
}

