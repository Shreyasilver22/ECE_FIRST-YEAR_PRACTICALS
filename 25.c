/*/*25.Sum of Diagonal Elements in a Matrix: Write a program to calculate the sum of diagonal
elements of a 2-D square matrix using a function.
*/


#include<stdio.h>
void diagonal();
int main()
{
int a[3][3],b[3][3],mul[3][3],r,c,i,j,k;
int m=3,n=3,p=3,q=3;
for(i=0;i<3;i++)
{

    for(j=0;j<3;j++)
    {
        a[i][j]=(i)+ (i+1);
        b[i][j]=(i+1)*6+ 2*(j+1);
        printf("%d",a[i][j]);
        
       

        



    }
    printf("\n");
    diagonal();


}


void diagonal();
{
    int sum=0;
    int k=0;
    for(k=0;k<3;k++){
        sum=sum+a[k][k]; 
}

printf("\n The sum of the diagnal elements is =%d\n",sum);
}


}