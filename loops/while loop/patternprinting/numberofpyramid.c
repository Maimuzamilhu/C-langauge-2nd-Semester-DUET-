#include <stdio.h>

int main(){

    int n;
    printf("Enter the  number of Rows :");
    scanf("%d" , &n);

    int nsp=3;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= nsp; k++)
        {
           printf(" ");
        }
        nsp =nsp-1;
        
        for (int j = 1; j <= 2*i-1; j++)
        {
           printf("%d" , j);
          
           
        }
        printf("\n");
    }
    


    return 0;
}