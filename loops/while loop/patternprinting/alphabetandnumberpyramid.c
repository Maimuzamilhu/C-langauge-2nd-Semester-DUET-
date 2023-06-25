#include <stdio.h>

int main() {
    int n;
    printf("Enter the Number of Rows: ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
            printf("\n");
        }
    } else {
        for (int k = 1; k <= n; k++) {
            int a = 1;
            for (int l = 1; l <= k; l++) {
                int b = a + 64;
                char ch = (char)b;
                printf("%c ", ch);
                a++;
            }
            printf("\n");
        }
    }

    return 0;
}
