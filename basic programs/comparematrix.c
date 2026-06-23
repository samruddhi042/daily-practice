#include <stdio.h>

#define ROWS 3
#define COLS 3

void findUncommonElements(char matrix1[ROWS][COLS], char matrix2[ROWS][COLS]) {
    printf("Uncommon elements:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                printf("%c at (%d, %d)\n", matrix1[i][j], i, j);
                printf("%c at (%d, %d)\n", matrix2[i][j], i, j);
            }
        }
    }
}

int main() {
    char matrix1[ROWS][COLS] = {
        {'A', 'B', 'C'},
        {'D', 'E', 'F'},
        {'G', 'H', 'I'}
    };
    
    char matrix2[ROWS][COLS] = {
        {'A', 'X', 'C'},
        {'D', 'Y', 'F'},
        {'Z', 'H', 'I'}
    };
    
    printf("Matrix 1:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("Matrix 2:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", matrix2[i][j]);
        }
        printf("\n");
    }
    
    findUncommonElements(matrix1, matrix2);
    
    return 0;
}
