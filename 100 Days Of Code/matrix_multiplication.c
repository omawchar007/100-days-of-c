/*Create a program to perform matrix multiplication in C.*/
#include <stdio.h>
#define ROWS 3
#define COLS 3

void multiplyMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int mat[ROWS][COLS]) {
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void saveMatrix(int mat[ROWS][COLS], const char* matrixName) {
    printf("Enter the values for matrix %s:\n", matrixName);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Enter value for position [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

int main() {
    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int result[ROWS][COLS];

    saveMatrix(matrix1, "1");
    saveMatrix(matrix2, "2");

    multiplyMatrices(matrix1, matrix2, result);
    printMatrix(result);
    return 0;
}
