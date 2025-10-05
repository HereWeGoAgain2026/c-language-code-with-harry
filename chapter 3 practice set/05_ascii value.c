// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

#include<stdio.h>

int main(){
 char ch ='o';
 printf("The character is %c\n", ch);
 printf("The value of character is %d\n" , ch);
//  97 , 122
if (ch >=97 && ch<=122){
    printf("Then the character is lower  case");
}
else{
    printf("Then it is not lowercase");
}
return 0;
}