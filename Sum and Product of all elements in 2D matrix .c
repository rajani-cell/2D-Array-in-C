//C Program to Read a Matrix and find Sum and Product of all elements.This program will read a matrix and prints sum and product of all elements of the two dimensional array.
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


   int sum=0;
   int product=1;
   

    
    
     
    for(int i=0;i<r1;i++)
    {

     for(int j=0;j<c1;j++)
     {

        sum=sum+first[i][j] ; 
        product=product*first[i][j];
          
     }

   }

   printf("SUM= %d\n",sum);

    printf("PRODUCT= %d\n",product);

return 0;
}
