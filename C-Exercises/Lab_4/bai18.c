#include <stdio.h>
#include <stdlib.h>


void inputMatrix(int** matrix,int rows, int cols){
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("matrix[%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}

void outputMatrix(int** matrix,int rows,int cols){
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

int** createMatrix (int rows,int cols){
    // allocate memory for array of the pointer to rows
    int** matrix = (int**)malloc(rows*sizeof(int*));
    if (matrix == NULL)
    {
        printf("Failed to allocate memory");
        return NULL;
    }


    // allocate memory for each row
    for (int i = 0; i < rows; ++i)
    {
        matrix[i] = (int*)malloc(cols*sizeof(int));
        if (matrix[i] == NULL)
         {
             printf("Failed to allocate memory");
             return NULL;
         } 
    }
    return matrix;
}

int** multiplyTwoMatrix(int** matrix1,int** matrix2,int rows,int cols){
    int** matrix3 = createMatrix(rows,cols);
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }
    return matrix3;
}


// MAIN
int main (){
    int rows,cols;
    printf("Input the number of Rows: ");
    scanf("%d",&rows);
    printf("Input the number of Columns: ");
    scanf("%d",&cols);

    int** matrix1 = createMatrix(rows,cols);
    printf("Input Values for MATRIX 1:\n");
    inputMatrix(matrix1,rows,cols);
    printf("\n");
    outputMatrix(matrix1,rows,cols);
    printf("\n\n");
    
    int** matrix2 = createMatrix(rows,cols);
    printf("Input Values for MATRIX 2:\n");
    inputMatrix(matrix2,rows,cols);
    printf("\n");
    outputMatrix(matrix2,rows,cols);
    printf("\n\n");
    

    printf("After Subtract :");
    printf("\n");
    int** matrix3 = multiplyTwoMatrix(matrix1,matrix2,rows,cols);
    outputMatrix(matrix3,rows,cols);






    // free the dynamic array
    for (int i = 0; i < rows; i++) {
        free(matrix1[i]);
    }
    free(matrix1);

    for (int i = 0; i < rows; i++) {
        free(matrix2[i]);
    }
    free(matrix2);

    for (int i = 0; i < rows; i++) {
        free(matrix3[i]);
    }
    free(matrix3);
    return 0;
}
