/*Write a program that uses two functions to swap two numbers 
a. Using a third variable 
b. Without using a third variable
*/

#include <stdio.h>

void swapWithVariable(int *x, int *y) {
    int z;
    temp = *x;
    *x = *y;
    *y = z;
}
void swapWithoutVariable(int *x, int *y) {
    *x =*x + *y;
    *y =*x - *y;
    *x =*x - *y;
}

int main()
{
/*swap without third variable*/
int a = 5, b = 10;
printf("Before swapping: a = %d, b = %d\n", a, b);
swapWithVariable(&a, &b);
printf("After swapping using a third variable: a = %d, b = %d\n", a, b);

/*swap without third variable*/
printf("Before swapping: a = %d, b = %d\n", a, b);
swapWithoutVariable(&a, &b);
printf("After swapping without using a third variable: a = %d, b = %d\n", a, b);
return 0;
}
