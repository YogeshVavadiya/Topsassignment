#include <stdio.h>


void readMatrix(int matrix[2][2], int rows, int cols) {
    printf("Enter matrix elements:\n");
    for (int i = 0; i < 2; i++) 
	{
        for ( int j = 0; j < 2; j++)
    	{
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[2][2], int rows, int cols) {
    printf("Matrix:\n");
    for ( int i = 0; i < 2; i++)
	{
        for ( int j = 0; j < 2; j++)
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int mat1[2][2], int mat2[2][2], int result[2][2], int rows, int cols) {
    for (int i = 0; i < 2; i++) 
	{ 
        for (int j = 0; j < 2; j++) 
		{
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrix(int mat1[2][2], int mat2[2][2], int result[2][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) 
	{
        for (int  j = 0; j < cols; j++)
		{
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrix(int mat1[2][2], int mat2[2][2], int result[2][2], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) 
	{
        for (int j = 0; j < cols2; j++) 
		{
            result[i][j] = 0;
            for ( int k = 0; k < cols1; k++) 
			{
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() 
{
    int i,j,k,mat1[2][2], mat2[2][2], result[2][2];
    int rows1, cols1, rows2, cols2;
    
    printf("Enter number of rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    readMatrix(mat1, rows1, cols1);
    
    printf("Enter number of rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    readMatrix(mat2, rows2, cols2);
    
    addMatrix(mat1, mat2, result, rows1, cols1);
    printf("\nAddition of matrices:\n");
    displayMatrix(result, rows1, cols1);

    subtractMatrix(mat1, mat2, result, rows1, cols1);
    printf("\nSubtraction of matrices:\n");
    displayMatrix(result, rows1, cols1);

    multiplyMatrix(mat1, mat2, result, rows1, cols1, cols2);
    printf("\nMultiplication of matrices:\n");
    displayMatrix(result, rows1, cols2);

    
    return 0;
}

