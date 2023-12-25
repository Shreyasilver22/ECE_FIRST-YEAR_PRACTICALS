/*5. Calculate Factorial using Loops: Write a program to calculate the factorial of a number using a for loop and return its value. */
#include<stdio.h>
int main()
{
    int i,count,num,fact;
    printf("enter number");
    scanf("%d",&num);
    fact=i=1;
    while(i<=num);
    {
        fact=fact*i;
        i++;
    }
printf("enter factorial =%d",fact);
}