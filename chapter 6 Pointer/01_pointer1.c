#include<stdio.h>
int main (){
int i =8;
int *j;
j=&i;
printf("The value of pointer i  is %u\n",&i);
printf("The value of pointer i  %u\n",j);
printf("The value of pointer j  is  %u \n",&j);

printf("The value at which j is %d\n", *(&i));
printf("The value at which j is %d\n", *j);
printf("The value at which j is %d\n", i);

return 0;
}