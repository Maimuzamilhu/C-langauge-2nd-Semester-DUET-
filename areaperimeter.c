#include <stdio.h>

int main (){

    int l , b;
    printf("Enter Your Length :");
    scanf("%d" , &l);
    printf("Enter Your Breadth :");
    scanf("%d" , &b);
    int a = l*b;
    int p = 2 * (l*b);
    if (a>p)
    {
        printf("Area is greater than perimeter ");
    }
    else{
        printf("Area is not greater than perimeter ");
    }
    


    return 0;
}
