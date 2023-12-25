/*20. Swap Two Numbers Using Pointers: 
Write a program to swap values 
of two variables*/

#include<stdio.h>
void swapp(int *x,int *y);
int main()
{
    int a=10,b=20;
    printf("a=%d b=%d\n",a,b);
    swapp(&a,&b);
    
    printf("a=%d b=%d\n",a,b);
    return 0;
}
void swapp(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
