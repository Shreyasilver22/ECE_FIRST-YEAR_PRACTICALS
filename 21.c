/*21. Pointer Arithmetic: Write a program to illustrate the following basic pointer arithmetic
operations.
a. Increment a pointer
b. Decrement a Pointer
c. Add an integer to a pointer
d. Subtract an integer from a pointer
e. Subtract two pointers of the same type
*/
#include<stdio.h>
int main()
{
    int i=3,*j,**k;
    j=&i;
    printf("address of i=%x\n",j);
    i++;
    printf("address after incrrementing i=%x\n",j);
    i--;
    printf("address after decrementing:%x\n",j);
    i=i+2;
    printf("address after adding integer:%x\n",j);
    i=i-2;
    printf("address after subtracting integer:%x\n",j);
    int x = i - j;
    printf("Address after subtracting two pointers(i - j): %x\n", x);

}
