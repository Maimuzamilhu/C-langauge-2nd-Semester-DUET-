#include <stdio.h>

int main (){

    int n;
    printf("Enter the number of rows :");
    scanf("%d" , &n);

    int nsp = 3;
    
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= nsp; k++)
        {
           printf(" ");
        }
           nsp = nsp-1;
        int a =1;
        for (int j = 1; j <= 2*i-1; j++)
        {
            int  b = a+64;
        char ch = (char)b;
            printf("%c", ch);
          a++;
        }
         
        printf("\n");
        
    }
    


    return 0;
}