#include<stdio.h>

int sum(int , int);

int sum(int x, int y)
{
    return x+y;
}
int main(){
    int a, b, c,d,e,f,g,h,j;
    
    printf("Enter the value of a \n",a);
    scanf("%d",&a);


    printf("Enter the value of b \n",b);
    scanf("%d",&b);

    c = sum(a,b);
    printf("Value of addition of a and b is =%d\n",c);

    printf("Enter the value of d \n",d);
    scanf("%d",&d);
    
    printf("Enter the value of e \n",e);
    scanf("%d",&e);

    f = sum(d,e);
    printf("%d",f );

    return 0;
}