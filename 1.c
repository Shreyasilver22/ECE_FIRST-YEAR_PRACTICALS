/*1. Simple Interest Calculation: Write a program that uses a function to calculate 
and return simple interest with given principal, rate, and time*/

#include<stdio.h>
void simple_interest(int x,int y,float z);
int main()
{
    int a,b;
    float c;
    float z;

    printf("enter principle value:\n");
    
    printf("enter time period in months:\n");
    printf("enter rate of interest:\n");
    scanf("%d%d%f",&a,&b,&c);
    printf("simple interest is\n");
    simple_interest(a,b,c);
    
}
void simple_interest(int x,int y,float z)
{
    int si;
    si=(x*y*z)/100;
    printf("%d",si);

}