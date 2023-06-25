#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of Rows: ");
    scanf("%d", &n);

    int nst = n-1;
    for (int i = 1; i <= n; i++) {
       
       for (int j = 1; j <= i; j++) {
          printf("%d", j);
       }
        for (int k = 1; k <= nst; k++) {
            printf("*");
        }
        nst = nst-1;
       printf("\n");
    }

    return 0;
}