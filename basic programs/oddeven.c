#include <stdio.h>

int main() {
    int a; // Declare variable 'a'

    printf("Enter an integer: "); // Proper message formatting
    scanf("%d", &a); // No space between '&' and 'a'

    // Check if the number is even or odd
    if (a % 2 == 0) {
        printf("%d is an even number.\n", a); // Corrected printf statement
    } else {
        printf("%d is an odd number.\n", a);
    }

    return 0;
}
