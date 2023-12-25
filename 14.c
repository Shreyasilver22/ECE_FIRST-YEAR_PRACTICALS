/*
4. String Handling using Library Functions:
a. Palindrome Check for a String: Write a program to check if a string is a
palindrome or not.
b. String Length Calculation Using Functions: Write a program to calculate the
length of a string using a library functions / predefined operators.
c. String Concatenation: Write a program to concatenate two strings using library
functions.

*/

#include<stdio.h>
#include<string.h>
int main()
{
/*a. Palindrome Check for a String: Write a program to check if a string is a
palindrome or not.*/

    char c[10] = "racecar" ;

    int x = 0;
    int y = strlen(c) - 1;

    while (y > x) {
        if (c[x++] != c[y--]) {
            printf("%s is not a palindrome\n", c);
            return 0;
    
        }
    }
 
    printf("%s is a palindrome\n", c);


    /*b. String Length Calculation Using Functions: Write a program to calculate the
length of a string using a library functions / predefined operators.*/
    char a[10]="hello";
    int len;
    len=strlen(a);
    printf("length of string =%d",len);

/*c. String Concatenation: Write a program to concatenate two strings using library
functions.*/

char b[10]="hello";
printf("\n");
strcat(a,b);
printf("Concatenated string:%s",a);




}