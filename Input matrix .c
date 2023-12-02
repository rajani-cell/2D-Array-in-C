//C Program to Read and Print a RxC Matrix, R and C must be input by the User.This program will read a two dimensional array (Matrix), number of rows (R) and number of columns (C) will be read through the User.
#include<stdio.h>
int main()
{  
    int R,C;
    printf("Enter row :");
    scanf("%d",&R);
     printf("Enter coloum :");
    scanf("%d",&C);


    if(R<=0 || C<=0)
    {
           printf("Please enter valide row and coloum value.");
           return 1;

    }


    
    int arr[R][C];
    printf("Enter the matrix :\n\n");
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            
           printf("Enter the element at position [%d][%d] :",i+1,j+1) ;
           scanf("%d",&arr[i][j]);
            
        }
        printf("\n");
    }
    printf("\n Matrix :\n");
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
    
           printf("%d ",arr[i][j]);
            
        }
        printf("\n");
    }
    
return 0;
}
