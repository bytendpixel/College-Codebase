#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5; // size of the matrix
    int **matrix = (int **) calloc(n, sizeof(int *)); // allocate memory for matrix
    for(int i=0; i<n; i++)
        matrix[i] = (int *) calloc(n, sizeof(int));
    // initialize variables for generating matrix
    int row_start = 0, col_start = 0, row_end = n-1, col_end = n-1, num = 1;
    while(row_start <= row_end && col_start <= col_end) {
        // fill the first row from left to right
        for(int i=col_start; i<=col_end; i++)
            matrix[row_start][i] = num++;
        row_start++;
        // fill the last column from top to bottom
        for(int i=row_start; i<=row_end; i++)
            matrix[i][col_end] = num++;
        col_end--;
        // fill the last row from right to left
        if(row_start <= row_end) {
            for(int i=col_end; i>=col_start; i--)
                matrix[row_end][i] = num++;
            row_end--;
        }
        // fill the first column from bottom to top
        if(col_start <= col_end) {
            for(int i=row_end; i>=row_start; i--)
                matrix[i][col_start] = num++;
            col_start++;
        }
    }
    // print the generated matrix
    printf("The spiral matrix is:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
    // free allocated memory
    for(int i=0; i<n; i++)
        free(matrix[i]);
    free(matrix);
    return 0;
}
