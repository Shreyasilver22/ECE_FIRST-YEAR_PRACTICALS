#include <stdio.h>

int main() 
{
   int n;
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);
   int ar[n];
   int size = sizeof(ar[n])/sizeof(ar[0]);
   for(int i = 0;i < n;i++)
   {
     printf("Enter element %d: ", i + 1);
     scanf("%d", &arr[i]);
   }

   int largest = ar[0];
    for(int i = 0;i < n;i++)
    {
       if(ar[i] > largest)
       {
        largest = ar[i];
       }
    }

    int smallest = arr[0];
    for(int i = 0;i < n;i++)
    {
       if(ar[i] < smallest)
       {
        smallest = ar[i];
       }
    }

    float sum = 0;
    for(int i = 0; i < n;i++)
    {
      sum = sum + ar[i];
    }

    float avg = sum/n;

   printf("The maximum value in the array is: %d\n", largest);
   printf("The minimum value  in the array is: %d\n", smallest);
   printf("The average value of all the elements in the array is: %f\n", avg);
    return 0;
}
