//C program to arrange coloums elements in ascending order
#include<stdio.h>

int main()
{

int row,col,matrix1[10][10],i,j;

printf("Matrix :\n");
printf("Enter row :");
scanf("%d",&row);
printf("Enter coloum :");
scanf("%d",&col);


printf("\nEnter element of Matrix1 :\n");
for(int i=0;i<row;i++)
{
  for(int j=0;j<col;j++)
  {
   printf("Matrix1 [%d][%d] :",i+1,j+1);
   scanf("%d",&matrix1[i][j]);


  }
printf("\n");

}



int temp;
for(int i=0;i<row;i++)
{
  for(int j=0;j<col;j++)
  {
    for(int k=0;k<col;k++)
    {
      
      if(matrix1[k][j]>matrix1[k+1][j])
      {
          
        temp=matrix1[k][j] ;
        matrix1[k][j]=matrix1[k+1][j];
        matrix1[k+1][j]=temp;


      }

    }
  
  }

}




for(int i=0;i<row;i++)
{
  for(int j=0;j<col;j++)
  {
  
   printf("%d ",matrix1[i][j]);


  }
printf("\n");

}




    return 0;
}
