/*
String Reverse without Library Function: Write a program to reverse a string (array of
char) without using string library functions.

*/
#include<stdio.h>
int main()
{
    char a[50],b[50];
    int i=0;
    printf("enter a string:");

    printf("\n");

    scanf("%s",a);
    for(i=4;i>0;){
        printf("%c",a[i]);
       i=i-1;
    }
    
    


}