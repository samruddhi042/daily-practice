#include <stdio.h>

void printDiamondPattern(int n) {
    int i, j, space;

    // Upper half of the diamond
    for (i = 1; i <= n; i++) {
        // Printing leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Printing numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Printing leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Printing numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    printDiamondPattern(n);
    return 0;
}
