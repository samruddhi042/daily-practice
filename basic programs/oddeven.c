#include <stdio.h>

int main() {
    int a;      //declare variable 'a'

    printf("Enter an integer: ");
    scanf("%d", &a);

    // Check if the number is even or odd
    if (a % 2 == 0) {
        printf("%d is an even number.\n", a); 
    } else {
        printf("%d is an odd number.\n", a);
    }

    return 0;
}
