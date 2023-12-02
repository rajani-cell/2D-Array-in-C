//C Program to find Sum of all elements of each row of a matrix.This C program will read a Matrix (two dimensional arrays) and print the sum of all elements of each row.
#include<stdio.h>
int main()
{
   int first[10][10],r1,c1;

   printf("Enter the row and coloum of first matrix :");
   scanf("%d%d",&r1,&c1);

   

   printf("\nEnter first matrix:\n\n");
   for(int i=0;i<r1;i++)
   {
     for(int j=0;j<c1;j++)
     {
          printf("matrix1[%d,%d] :",i+1,j+1);
          scanf("%d",&first[i][j]);
     }

     printf("\n");
   }

    for(int i=0;i<r1;++i)
    {
    int sum=0;

    for(int j=0;j<c1;++j)
     {

        sum=sum+first[i][j] ; 
       
            
     }
 
          printf("sum of row= %d\n",sum);
   }



return 0;
}
