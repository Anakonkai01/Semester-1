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

int** transposeMatrix(int** matrix1,int rows,int cols){
    int** matrix3 = createMatrix(cols,rows);
    for (int i = 0; i < cols; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            matrix3[i][j] = matrix1[j][i];
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
    

    printf("After transpose :");
    printf("\n");
    int** matrix3 = transposeMatrix(matrix1,rows,cols);
    outputMatrix(matrix3,rows,cols);




    // free the dynamic array
    for (int i = 0; i < rows; i++) {
        free(matrix1[i]);
    }
    free(matrix1);

    
    for (int i = 0; i < rows; i++) {
        free(matrix3[i]);
    }
    free(matrix3);

    return 0;
}
