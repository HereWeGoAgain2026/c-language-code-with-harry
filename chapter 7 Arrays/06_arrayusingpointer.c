#include <stdio.h>
int main()
{
    int marks[] = {1,32,34,5,6};

    int* ptr = marks;

    for(int i =0; i<=5 ; i++){

         printf("The marks at index %u is %u\n", i, *ptr);
         ptr++;
    }
    
    return 0;
}