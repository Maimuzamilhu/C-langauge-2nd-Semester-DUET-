#include <stdio.h>

int main (){
    int n ;
    printf("Enter the no of lines :");
    scanf("%d" , &n);

    int nsp = n-1;
    for (int i = 1; i <= n; i++)
    {
      
        for (int m = 0; m <= nsp; m++)
        {
           printf(" ");
        }
        nsp--;
        
        for (int j = 1; j <= i; j++)
        {
           printf("%d" , j);
        }
        int a = i-1;
        for (int k = 1; k <= i-1; k++)
        {
            
           printf("%d" , a);
           a--;
        }
        
        printf("\n");
    }
    


    return 0;
}