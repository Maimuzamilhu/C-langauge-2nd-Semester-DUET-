#include <stdio.h>

int main(){

 int year;

 printf("Enter you year : ");
 scanf("%d" , &year);

 if ( year % 4 == 0)
 {
   printf("Your number is leap Year :");
 }
 else if (year % 400 == 0)
 {
     printf("Your number is leap Year :");
 }
 else
 {
    printf("Year is not a leap Year");
 }
 
 

 return 0;

}