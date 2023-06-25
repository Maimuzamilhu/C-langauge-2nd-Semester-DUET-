#include <stdio.h>

int main(){

 int value;

 printf("Enter you value : ");
 scanf("%d" , &value);

 if (value<0)
 {
    value = value * (-1);

 }
 printf(" The absolute value is : %d" , value);
 

 return 0;

}