#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int sum = 0;
    int lastdigit;
    int reverse = 0;
    int temp = n;

    while (temp != 0) {
        lastdigit = temp % 10;
        sum = sum + lastdigit;
        reverse = reverse * 10 + lastdigit;
        temp = temp / 10;
    }

    sum = sum + reverse;

    printf("The sum of the number and its reverse is %d", sum);

    return 0;
}