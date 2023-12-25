/*24. Dynamic Memory Allocation for 1-D Array: Write a program to allocate memory
dynamically for a 1-D array using malloc
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n;
    printf("Enter n value :");
    scanf("%d",&n);
    a=(int*)malloc(n*2);
    printf("Entering integers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    free(a);
    printf("%d",a);
}
