#include <stdio.h>
#include <math.h>

int main (){

    int num;

    printf("Enter an integer :");
    scanf("%d" , &num);

    float square = sqrt(num);
    printf("Square root value of %d = %.2f\n" ,num , square);


    return 0;
}