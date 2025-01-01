#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5; // number of rows and columns
    int **matrix = (int **) calloc(n, sizeof(int *)); // allocate memory for matrix
    int i, j, k = 1, l = 0, m = n;

    // allocate memory for each row of the matrix
    for (i = 0; i < n; i++) {
        matrix[i] = (int *) calloc(n, sizeof(int));
    }

    // fill the matrix in a spiral pattern
    while (k <= n * n) {
        // fill top row
        for (i = l; i < m; i++) {
            matrix[l][i] = k++;
        }
        // fill right column
        for (i = l + 1; i < m; i++) {
            matrix[i][m-1] = k++;
        }
        // fill bottom row
        for (i = m-2; i >= l; i--) {
            matrix[m-1][i] = k++;
        }
        // fill left column
        for (i = m-2; i > l; i--) {
            matrix[i][l] = k++;
        }
        l++; // move to the next inner spiral
        m--; // reduce the size of the spiral
    }

    // print the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    // free the memory allocated for the matrix
    for (i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
