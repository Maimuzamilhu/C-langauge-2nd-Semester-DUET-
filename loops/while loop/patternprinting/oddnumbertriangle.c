#include <stdio.h>

int main (){
    int n;
    printf("Enter the rows :");
    scanf("%d" , &n);

    int m;
    printf("Enter the Colums :");
    scanf("%d" , &m);

    for (int i = 1; i <= 2*(n-1); i=i+2)
    {
       for (int j = 1; j <= m; i=i+2)
       {
        printf("%d" ,j);
       }
       printf("\n");
    }
    



    return 0;
}