#include <stdio.h>

int main (){

int n;
printf("Enter the Values: ");
scanf("%d" , &n);
int a = 1;
int b = 1;
int sum = 1; 
for (int i = 1; i <= n-2; i++)
{
    sum = a + b;
    a = b;
    b = sum;
     printf("The %d fibonacci number is :%d\n" ,i , sum);
}
 



    return 0;
}