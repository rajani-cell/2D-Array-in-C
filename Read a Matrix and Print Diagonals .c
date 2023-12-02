//C Program to Read a Matrix and Print Diagonals.This C program will read a matrix of MxN dimensions and prints only diagonal’s elements of the matrix.
#include<stdio.h>
int main()
{
   int first[10][10],r1,c1;

   printf("Enter the row and coloum of first matrix :");
   scanf("%d%d",&r1,&c1);

  c1=r1;

   

   printf("\nEnter first squre matrix:\n\n");
   for(int i=0;i<r1;i++)
   {
     for(int j=0;j<c1;j++)
     {
          printf("matrix1[%d,%d] :",i+1,j+1);
          scanf("%d",&first[i][j]);
     }

     printf("\n");
   }



    printf("\nDiagonal matrix :\n"); 
    for(int i=0;i<r1;i++)
    {
   
      for(int j=0;j<c1;j++)
        {

           if(i==j)
           {

             printf("%d  ",first[i][j]);
            
           }
           
           else
           {
            printf("  ");
           }
        
            
       }

       printf("\n");
 
   }


return 0;
}
