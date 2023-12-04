//Matrix mltiplication using funtion.
#include <stdio.h>

void matrixMultiplication(int row1, int col1, int matrix1[10][10], int row2, int col2, int matrix2[10][10], int result[10][10]);

void display(int row1, int col2, int result[10][10]);

int main()
{
    int row1, col1, matrix1[10][10];
    printf("Matrix1:\n");
    printf("Enter row: ");
    scanf("%d", &row1);
    printf("Enter column: ");
    scanf("%d", &col1);

    int row2, col2, matrix2[10][10];
    printf("\nMatrix2:\n");
    printf("Enter row: ");
    scanf("%d", &row2);
    printf("Enter column: ");
    scanf("%d", &col2);

    if (col1 != row2)
    {
        printf("\nError!! Product is not possible.\n");
    }
    else
    {
        printf("\nEnter elements of Matrix1:\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("Matrix1 [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix1[i][j]);
            }
            printf("\n");
        }

        printf("\nEnter elements of Matrix2:\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("Matrix2 [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix2[i][j]);
            }
            printf("\n");
        }
    }

    int result[10][10];
    matrixMultiplication(row1, col1, matrix1, row2, col2, matrix2, result);

    printf("\nMatrix multiplication:\n");
    display(row1, col2, result);

    return 0;
}

void matrixMultiplication(int row1, int col1, int matrix1[10][10], int row2, int col2, int matrix2[10][10], int result[10][10])
{
    int sum=0;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                
              sum = sum+matrix1[i][k] * matrix2[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
}

void display(int row1, int col2, int result[10][10])
{
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
 }
}
