#include <stdio.h>

int main (){

    int n;
    printf("Enter your Rows :");
    scanf("%d" , &n);

    int nsp =n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int m = 1; m <= nsp; m++)
        {
           printf(" ");
        }
        nsp--;
        
         int a=1;
        for (int j = 1; j <= i; j++)
        {
         int  b = a+64;
         char ch = (char)b;