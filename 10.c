/*Write a program that uses two functions to swap two numbers 
a. Using a third variable 
b. Without using a third variable
*/

#include<stdio.h>
void swap(float x, float y);
int main()
{
    float a,b;
    printf("enter value of a and b");
    scanf("%d%d",&a,&b);
    swap(a,b);
    
}

void swap(float x, float y)
{
    float c;
    c=x;
    x=y;
    y=c;

    printf("value of a=%d",x);
    printf("value of b=%d",y);

}
