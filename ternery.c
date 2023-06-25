#include <stdio.h>

int main (){

    int n;
    printf("Enter a Number: ");
    scanf("%d" , &n);
    if (n%2==0)
    //ternery operators
    //exp1 ? exp2 : exp3
    n%2==0 ? printf("Even Number") : printf("Odd number");
   
    // {
    //     printf("Even Number: ");
    // }
    // else
    // printf("Odd Number");
    
    return 0;

}