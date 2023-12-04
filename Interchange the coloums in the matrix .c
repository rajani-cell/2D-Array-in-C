//C program to interchange the coloums in the matrix
#include<stdio.h>

int main()
{

int row,col,matrix1[10][10];

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



  for(int j=0;j<row;j++)
  {
    
  temp=matrix1[j][0];
  matrix1[j][0]=matrix1[j][1];
  matrix1[j][1]=temp;
  }




printf("After enterchange row :\n");
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
