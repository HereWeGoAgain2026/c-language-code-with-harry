#include<stdio.h>
int main(){
     int a;
     printf("Enter a:");
     scanf("%d", &a);
      
     switch(a){
        case 1:
              printf("You entered the value of a: 1\n");
              break;
        case 2:
              printf("You entered the value of a is 2\n");   
              break;
        case 3:
              printf("You entered the value of a is 3\n");
              break;
        case 4:
              printf("You entered the value of a is 4\n");
              break;
        default:
              printf("No match found");        
     }
     


    return 0;
}