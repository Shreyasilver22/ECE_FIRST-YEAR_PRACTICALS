/*22. Recursive Function for Factorial: Write a program to calculate the factorial of a number
using recursion.
*/
#include<stdio.h>
int fact(int x );
int main()
{
    int a,factorial;
    printf("Enter number for factorial");
    scanf("%d",&a);
    factorial=(fact(a));
    printf("Factorial=%d",factorial);
    return 0;
}

int fact(int x)
{
    int b;
    if(x==1)
       return (1);
    else
       b=x*fact(x-1);
    return(b);
}