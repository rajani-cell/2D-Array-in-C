//Multiplication in 2 matrix
#include<stdio.h>
int main()
{
   int first[10][10],second[10][10],r1,r2,c1,c2;

   printf("Enter the row and coloum of first matrix :");
   scanf("%d%d",&r1,&c1);

    printf("Enter the row and coloum of second matrix :");
   scanf("%d%d",&r2,&c2);


   while(r1 != c2)
   {

    printf("Error !! first matrix row not equal to second matrix coloum.please change row and coloum.\n");
    printf("Enter the row and coloum of first matrix :");
    scanf("%d%d",&r1,&c1);

    printf("Enter the row and coloum of second matrix :");
    scanf("%d%d",&r2,&c2);


   }

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



   printf("\nEnter second matrix:\n\n");
   for(int i=0;i<r2;i++)
   {
     for(int j=0;j<c2;j++)
     {
          printf("matrix2[%d,%d] :",i+1,j+1);
          scanf("%d",&second[i][j]);
     }

     printf("\n");
   }

    
    int sum=0;
    int result[10][10];

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {

         for(int k=0;k<c1;k++)
         {
         
           sum=sum+first[i][k]*second[k][j];
          

         }
          result[i][j]=sum;
          sum=0;

        }

    }

    
    
     printf("\nMULTIPILICATION : \n\n");
    for(int i=0;i<r1;i++)
    {

     for(int j=0;j<c2;j++)
     {
          
          printf("%d ",result[i][j]);
     }

     printf("\n");
   }



    return 0;
}
