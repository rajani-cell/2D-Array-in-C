//Substractions of 2 matrix
#include<stdio.h>
int main()
{  
    int R,C;
    printf("Enter row :");
    scanf("%d",&R);
     printf("Enter coloum :");
    scanf("%d",&C);


    if(R<=0 || C<=0 || R!=C)
    {
        printf("Please enter valide row and coloum value.");
        return 1;

    }


    
    int arr1[R][C];
    printf("Enter the matrix 1:\n");
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            
           printf("Enter the element at position [%d][%d] :",i+1,j+1) ;
           scanf("%d",&arr1[i][j]);
            
        }
    }
    printf("\n Matrix 1 :\n");
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
    
           printf("%d    ",arr1[i][j]);
            
        }
        printf("\n");
    }

     printf("\n");

    int arr2[R][C];
    printf("\nEnter the matrix 2:\n\n");
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            
           printf("Enter the element at position [%d][%d]:",i+1,j+1) ;
           scanf("%d",&arr2[i][j]);
            
        }
    }

    printf("\n Matrix 2 :\n");
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
    
           printf("%d    ",arr2[i][j]);
            
        }
        printf("\n");
    }



   int sub[R][C];

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {

           sub[i][j]=arr1[i][j]-arr2[i][j];
             
        }
       
    }

    printf("\n");
   printf("\nSubstraction of matrix :\n");
     for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {

          printf("%d    ",sub[i][j]);
             
        }
        printf("\n");
       
    }



    
    
return 0;
}
