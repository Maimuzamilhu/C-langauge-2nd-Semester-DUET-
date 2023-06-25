#include <stdio.h>

int main(){

    int numbers;
    int operations=0;

    printf("Print the positive integer :");
    scanf("%d" , &numbers);

    if (numbers <1)
    {
       printf("Ivalid Number");
       return 0;
    }
        printf("Initial Value is %d" , numbers);

        while (numbers != 1)
        {
            if (numbers %2==0)
            {
                numbers = numbers/2;
            }
           else
           {
              numbers = (numbers *3) + 1;
           }
           
           printf ("The value is %d\n" , numbers);
           operations++;
            
        }
        printf("The final value is 1 , numbers of steps is %d\n" , operations);

    return 0;
}