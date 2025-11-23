#include<stdio.h>
int main(){
    int age= 7;
    if(age>65)
    {
        printf("The person is senior citizen");
    }
    else if(age>40){
        printf("You are elder you can drive");
    }
    else if (age>18){
        printf("You are young but you can drive ");
    }
    else if (age<18){
        printf("You are underage you cannot drive");
    }




    return 0;
}