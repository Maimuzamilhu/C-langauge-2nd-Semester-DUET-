#include <stdio.h>

int main (){
    int num , i;
    printf("Enter the Number :");
    scanf("%d" ,&num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n" , num , i, num *i);
    }
    printf("\n");


    return 0;
}