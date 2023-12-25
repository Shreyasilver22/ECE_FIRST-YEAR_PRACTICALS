/*3. Sum of Natural Numbers: Given a positive integer n,
 write a program to calculate and return the
  sum of natural numbers up to n using loops. */
#include<stdio.h>
int main()
{
    int sum=0;
    int n,i;
    printf("enter value of n:");
    scanf("%d",&n);
    for (i=0;i<=n;i++){
        
        sum=sum+i;
        
    }
    printf("%d",sum);
}