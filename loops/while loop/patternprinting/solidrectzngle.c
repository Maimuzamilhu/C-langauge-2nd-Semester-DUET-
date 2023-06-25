#include <stdio.h>

int main() {
    int n;
    printf("Enter a Rows: ");
    scanf("%d", &n);

     int m;
    printf("Enter a Colums: ");
    scanf("%d", &m);

   for (int i = 1; i <= n; i++)//lines
   {
    for (int i = 1; i <= m; i++) {
        printf("*");
    }
    printf("\n"); //hr line k bad enter marny k lie
   }
   

    return 0;
}