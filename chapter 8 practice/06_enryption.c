#include<stdio.h>
#include<string.h>
int main (){
    char str[] = "Hi yash bhamare here";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    
    printf("%s",str);
return 0;
}