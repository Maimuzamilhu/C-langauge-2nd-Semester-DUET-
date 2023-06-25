//Wap to print all the ASCII values & their equivalent character of 26 alphabet using a while loop

#include <stdio.h>

int main (){
    //typecase 
    for ( int i = 65; i <= 90; i++)
    {
        printf("%d " , i);
        char ch = ( char)i;
        printf("%c\n" , ch);
    }
    
     


    return 0;
}