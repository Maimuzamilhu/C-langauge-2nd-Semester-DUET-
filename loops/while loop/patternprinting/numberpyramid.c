#include <stdio.h>

int main (){

    int n ;
    printf("Enter the Rows  :");
    scanf("%d" , &n );

 int  m;
    printf("Enter the colums :");
    scanf("%d" , &m);

    int a;
    for ( int i = 1; i<=n; i++)
    {
       for (int j = 1; j<=i; j++)
       {
            printf("%d" , j);
       }
       
        printf("\n");
    }
    

    return 0;
}

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a Rows: ");
//     scanf("%d", &n);

//      int m;
//     printf("Enter a Colums: ");
//     scanf("%d", &m);

//    for (int i = 1; i <= n; i++)//lines
//    {
//     for (int i = 1; i <= m; i++) {
//         printf("*");
//     }
//     printf("\n"); //hr line k bad enter marny k lie
//    }
   

//     return 0;
// }