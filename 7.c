/*. Find Largest Element in an Array: Write a program that uses for loops to find the largest element in a 1-D array and returns it*/
#include <stdio.h>

int largest()
{
    int ar[5] = {1,2,3,4,5};
    int largest = ar[0];

    int size = sizeof(ar)/sizeof(ar[0]);

    for(int i = 0;i < size;i++)
    {
       if(ar[i] > largest)
       {
        largest = ar[i];
       }
    }
    return largest;
};

int main() 
{
  int z = largest();
   printf("The largest element of the array is %d\n", z);
    return 0;
}
