#include <stdio.h>

int pow(int a , int b){

if (b==0)
{
    return 1;
    }else if (b==1)
    {
       return a;
    } else
    {
        return a*pow(a,b-1);
    }
}

    int main (){

        int a , b,  result;

        printf("Enter the Value of a :");
        scanf("%d" , &a);

        printf("Enter the Value of b :");
        scanf("%d" , &b);

        result= pow(a , b);

        printf("The %d raise to power of %d is %d\n" , a , b , result);

        return 0;
        

    }
    
    
