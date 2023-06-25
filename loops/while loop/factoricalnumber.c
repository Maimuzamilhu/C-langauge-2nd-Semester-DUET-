#include <stdio.h>
//print the factorial of a given number n




int main (){

int n;
printf("Enter the Number ");
scanf("%d" , &n);

    int product=1;
    for ( int i = 1; i <= n; i++)
    {
       product= product*i;

    }
    printf("Here is the Answer : %d" , product);
    
     

    return 0;
}