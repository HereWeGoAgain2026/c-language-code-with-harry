#include<stdio.h>
int main (){
    int arr[10];
    int t;

    printf("Enter number to get table  \n"); //Don't include %d in printf
    scanf("%d",&t);

     for (int i = 0; i<10 ; i++ )
    {
      arr[i] = t* (i+1);  
    }
    for (int i =0 ; i<10 ; i++)
    {
        printf("The value of %d X %d = %d \n", t , i+1,arr[i]);
    }

return 0;
}