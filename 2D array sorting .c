//C program to arrange row elements in ascending order
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
      
      if(matrix1[i][k]>matrix1[i][k+1])
      {
          
        temp=matrix1[i][k] ;
        matrix1[i][k]=matrix1[i][k+1];
        matrix1[i][k+1]=temp;


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
