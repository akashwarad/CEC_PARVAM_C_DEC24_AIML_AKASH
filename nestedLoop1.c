#include <stdio.h>

int main() {
    int n = 5;

    // Pattern 1: Increasing Triangle
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= j; i++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n--------------------------\n\n");

    // Pattern 2: Centered Increasing Triangle
    for (int j = 1; j <= n; j++) {
        for (int space = n - j; space > 0; space--) {
            printf(" ");
        }
        for (int i = 1; i <= j; i++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n--------------------------\n\n");

    // Pattern 3: Decreasing Triangle
    for (int j = n; j >= 1; j--) {
        for (int i = 1; i <= j; i++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n--------------------------\n\n");

    // Pattern 4: Centered Star
    for (int i = 1; i <= 1; i++) {
        printf("* * *\n");
    }

    return 0;
}