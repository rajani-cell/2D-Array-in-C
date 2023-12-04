//C program to find a normal value.
#include<stdio.h>
#include<math.h>

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

int sum=0;

for(int i=0;i<row;i++)
{
  for(int j=0;j<col;j++)
  {
    
   sum=sum+matrix1[i][j]*matrix1[i][j];
   
  }


}

float normal_value;
normal_value=sqrt(sum);


printf("Normal value of this matrix = %f",normal_value);



    return 0;
}
