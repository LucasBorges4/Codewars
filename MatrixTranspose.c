#include <stddef.h>

void transpose_matrix (size_t rows, size_t cols, const int matrix[rows][cols], int transpose[cols][rows]) {
    // fill the transpose[][] matrix
    for (size_t i = 0; i < cols; i++) {
        for (size_t j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
}