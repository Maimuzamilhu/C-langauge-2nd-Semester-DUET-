#include <stdio.h>

int main (){

    int n ;
    printf("ENTER THE NUMBER ");
    scanf("%d" , &n);

    int sum=0;
    int lastdigit;

    while (n!=0)
    {
        lastdigit = n%10;

        if (n %2!=0)
        {
          sum = sum + lastdigit;
        }
        n = n/10;
        
    }
    
    printf("Sum of odd numbee is %d" , sum);

    return 0;
}