#include<stdio.h>
int main (){
    FILE *ptr;
    ptr = fopen("yash.txt", "r");
    int num;
    if(ptr == NULL){
        printf("The file doen't exist");
    }
    else{
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);
    }
    fclose(ptr);
    
return 0;
}