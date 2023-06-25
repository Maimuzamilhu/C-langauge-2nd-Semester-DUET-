#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int r = 0;
    int lastdigit;

    while (n != 0) {
        lastdigit = n % 10;
        r = r * 10 + lastdigit;
        n = n / 10;
    }

    printf("The reverse number is %d", r);

    return 0;
}