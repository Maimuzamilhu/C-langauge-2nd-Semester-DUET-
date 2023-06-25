#include <stdio.h>

int main (){


    char c;
    int i=0;
    printf("Enter the Character :");
    scanf("%c" , &c);

    for (; c != '\n' ; i++)
    {
        scanf("%c" , &c);
        
    }
    
    printf("the total number of Character enter is %d" , i);


    return 0;
}