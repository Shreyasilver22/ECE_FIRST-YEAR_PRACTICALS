/*19. Linear Search in Array: Write a program to implement linear search in a 1-D array.*/

#include <stdio.h>

int main() 
{
    int b[20]={1,2,3,45,5,6,7,8,10};
    int i;int z;
    printf("enter searching element");
    scanf("%d",&z);
    for(i=0;i<20;i++){
        if (b[i]==z)
        {
            printf("%d is found at %d",z,i+1);
            break;
        }
    }



}