#include <stdio.h>

int main(){

 int cp , sp;

 printf("Enter you Cost price : ");
 scanf("%d" , &cp);
 printf("Enter your Sell Price :");
 scanf("%d" , &sp);

 if (sp>cp)
 {
    printf("You are in profit");

 }
 else
 {
    printf("You are in loss :");
 }
 
 

 return 0;

}