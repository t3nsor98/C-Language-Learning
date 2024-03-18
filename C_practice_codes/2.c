#include <stdio.h>

int main () {
    int matrix1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int sumOfMatrix[2][3];
    int i, j;
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            sumOfMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of two matrices:\n");
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%d\t", sumOfMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
