#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5; 
    int **matrix = (int **) calloc(n, sizeof(int *)); 
    for(int i=0; i<n; i++)
        matrix[i] = (int *) calloc(n, sizeof(int));
    
    int row_start = 0, col_start = 0, row_end = n-1, col_end = n-1, num = 1;
    while(row_start <= row_end && col_start <= col_end) {
        for(int i=col_start; i<=col_end; i++)
            matrix[row_start][i] = num++;
        row_start++;
        for(int i=row_start; i<=row_end; i++)
            matrix[i][col_end] = num++;
        col_end--;
        
        if(row_start <= row_end) {
            for(int i=col_end; i>=col_start; i--)
                matrix[row_end][i] = num++;
            row_end--;
        }
        
        if(col_start <= col_end) {
            for(int i=row_end; i>=row_start; i--)
                matrix[i][col_start] = num++;
            col_start++;
        }
    }
    
    printf("The spiral matrix is:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
   
    for(int i=0; i<n; i++)
        free(matrix[i]);
    free(matrix);
    return 0;
}
