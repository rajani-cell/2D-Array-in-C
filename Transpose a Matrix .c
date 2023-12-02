//C Program to Transpose a Matrix.This C program will read a matrix and print its transpose matrix.
#include<stdio.h>
int main()
{
   int first[10][10],transpose[10][10],r1,c1;

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

     
    for(int i=0;i<r1;i++)
    {
   
      for(int j=0;j<c1;j++)
        {

       
       transpose[j][i]=first[i][j];
       
            
       }
 

   }


   
    for(int i=0;i<c1;i++)
    {
   
      for(int j=0;j<r1;j++)
        {

       
       printf("%d ",transpose[i][j]);
       
            
       }
    printf("\n");

   }


return 0;
}
