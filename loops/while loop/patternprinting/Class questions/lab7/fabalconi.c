#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);

    printf("%d, ", a);  // Print the first term

    for (int i = 2; i <= n; i++) {
        printf("%d, ", b);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
