#include <stdio.h>

int main() {
    int num, square;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Squares of %d until the square is less than 1000:\n", num);
    square = num * num;
    while(square < 1000) {
        printf("%d\n", square);
        num++;
        square = num * num;
    }

    return 0;
}