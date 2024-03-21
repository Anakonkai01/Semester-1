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

int calculate_2x2_matrix(int** matrix,int i,int j){
    int determinant = (matrix[i][j]*matrix[i+1][j+1]) - (matrix[i][j+1]*matrix[i+1][j]);
    return determinant; 
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
        
    int cal = calculate_2x2_matrix(matrix1,0,0);
    printf("%d",cal);


    // free the dynamic array
    for (int i = 0; i < rows; i++) {
        free(matrix1[i]);
    }
    free(matrix1);
    return 0;
}
