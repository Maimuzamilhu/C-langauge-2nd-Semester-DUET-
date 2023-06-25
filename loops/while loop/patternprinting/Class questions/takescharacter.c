#include <stdio.h>

int main (){

    char c;

    printf("Enter Your Character: ");
    scanf("%c" , &c);

    for (;;)
    {
       if ( c == 'X')
       {
        break;
       }
      
    }
    
     printf("This program is terminated\n");

    return 0;
}