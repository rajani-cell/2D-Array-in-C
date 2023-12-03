#include<stdio.h>

int main()
{

int row,col,matrix1[10][10],matrix2[10][10];

printf("Matrix :\n");
printf("Enter row :");
scanf("%d",&row);
printf("Enter coloum :");
scanf("%d",&col);

col=row;

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

printf("\nEnter element of Matrix2 :\n");
for(int i=0;i<row;i++)
{
  for(int j=0;j<col;j++)
  {
   printf("Matrix1 [%d][%d] :",i+1,j+1);
   scanf("%d",&matrix2[i][j]);


  }
printf("\n");

}

int count=0;

for(int i=0;i<row;i++)
{
  for(int j=0;j<col;j++)
  {
    if(matrix1[i][j] != matrix2[i][j])
    {
         count=1;
         break;
    }


  }

}


if(count==0)
{
    printf("\nThis is a identical matrix.");
}

else
{

 printf("\nThis is not a identical matrix.");

}



    return 0;
}


