#include<stdio.h>
typedef struct c
{
   int real;
   int imaginary;
}complex;

void display (complex c){
     printf("The value of complex no is %d + %di",c.real,c.imaginary);
}

int main (){
    complex carr[5];
    for (int  i = 0; i < 4; i++)
    {
        /* code */
        printf("Enter the real part\n");
        scanf("%d", &carr[i].real);
    
        printf("Enter the imaginary  part\n");
        scanf("%d", &carr[i].imaginary);
        display(carr[i]);
    }
    

    
return 0;
}