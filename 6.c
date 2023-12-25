/*6. Basic Array Operations: Write a program to traverse an array and print the odd-indexed elements*/
#include<stdio.h>
int main()
{
    int numb[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int i=0,j=0;
    for (i=0;i<=7;i++){
    printf("value at index %d is %d",(2*i)-1,numb[(2*i)]);
    printf("\n");
    
    }
return 0;
}