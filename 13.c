// String Reverse without Library Function: Write a program to reverse a string (array of char) without using string library functions.

#include<stdio.h>

int main(){
    char str[] = "String Reverse without Library Function";
    int n = 0;

    while(str[n] != '\0'){
        n++;
    }

    for (int i = 0; i < n/2; i++){
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }

    printf("%s", str);
    
    return 0;
}
