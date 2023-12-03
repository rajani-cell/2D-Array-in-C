//C program to check a given matrix is an identity matrix or not.
#include<stdio.h>

int main()
{

int row,col,matrix[10][10];

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
   scanf("%d",&matrix[i][j]);


  }
printf("\n");

}

int count=0;

for(int i=0;i<row;i++)
{
  for(int j=0;j<col;j++)
  {
    if(i==j && matrix[i][j] !=1)
    {
         count=1;
         break;
    }

    else if(i!=j && matrix[i][j] !=0)
    {
        count=1;
        break;
    }


  }

}


if(count==0)
{
    printf("\nThis is a identity matrix.");
}

else
{

 printf("\nThis is not a identity matrix.");

}



    return 0;
}


