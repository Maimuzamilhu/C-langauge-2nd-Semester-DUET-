#include <stdio.h>

//write a program to print sum of digits of a given numbers.

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    int sum = 0;
     int lastdigit = 0;
    while (n != 0) {
        n = n % 10;
       sum = sum + lastdigit;

        n = n/10;
    }
    
    printf("The Sum of digits is %d", sum);

    return 0;
}