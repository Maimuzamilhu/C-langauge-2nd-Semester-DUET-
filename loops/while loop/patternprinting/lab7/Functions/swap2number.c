#include <stdio.h>

int main (){

    int c=1;
    int a;
    printf("Enter the 1st Number :");
    scanf("%d" , &a);

    int b;
    printf("Enter the 2nd Number :");
    scanf("%d" , &b);

    c=a;
    a=b;
    b=c;

    //also we can use with out declanring third variable 
    // a=a+b; 
    //b = a+b;
    //a=a-b;

    printf("The vale of a is %d\n:", a );
    printf("The vale of b is %d:", b );
    return 0;
}